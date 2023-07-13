import subprocess
import hashlib

from PyQt5 import QtWidgets
import sys


def setwindow():
    app = QtWidgets.QApplication(sys.argv)
    window = QtWidgets.QWidget()
    window.setWindowTitle("Необходима лицензия")
    window.resize(300, 70)
    label = QtWidgets.QLabel("<center>Необходима действительная лицензия</center>")
    btnQuit = QtWidgets.QPushButton("&Закрыть окно")
    vbox = QtWidgets.QVBoxLayout()
    vbox.addWidget(label)
    vbox.addWidget(btnQuit)
    window.setLayout(vbox)
    btnQuit.clicked.connect(app.quit)
    window.show()
    sys.exit(app.exec_())


# Выполнить команду и сохранить вывод в переменной
ur20fbcec = subprocess.check_output(["ethercat", "upload", "-p0", "--type", "uint32", "0x1018", "0x04"])
ur2016din = subprocess.check_output(["ethercat", "upload", "-p0", "--type", "string", "0x9000", "0x23"])
ur2016dop = subprocess.check_output(["ethercat", "upload", "-p0", "--type", "string", "0x9010", "0x23"])
ur204airtddiag = subprocess.check_output(["ethercat", "upload", "-p0", "--type", "string", "0x9020", "0x23"])

# Объединить все строки в одну
result_string = ur20fbcec.decode('utf-8') + ur2016din.decode('utf-8') + ur2016dop.decode('utf-8') + ur204airtddiag.decode('utf-8')

# Вывести результат на экран
print(result_string)

# Хешировать результат с помощью SHA-256
hash_object = hashlib.sha256(b'result_string')
hex_dig = hash_object.hexdigest()
# Вывести результат хэширования на экран
print(hex_dig)

# Считать содержимое файла license.lic
with open('license.lic', 'rb') as f:
    license_hash = f.read().strip()

license_dig = license_hash.decode('utf-8')
print(license_dig)

# # Проверить, совпадают ли хеш-суммы
if hex_dig == license_dig:
    print("Лицензия действительна")
else:
    setwindow()



