#include <iostream>
#include <fstream>

int main() {
    std::ifstream audioFile("your_audio_file.wav", std::ios::binary);   // Замените  "your_audio_file.wav" а путь к вашему аудио файлу

    if (audioFile) {
        // Находим начало и конец файла
        audioFile.seekg(0, std::ios::end);
        std::streampos fileSize = audioFile.tellg();
        audioFile.close();

        // Расчет длительности аудио файла
        double durationSeconds = fileSize / 44100.0;    // Изменить значение 4410 на соответствующую частоту дискретизации вашего аудио файла

        int minutes = durationSeconds / 60;
        int seconds = durationSeconds - (minutes * 60);

        std:: cout << "Длительность: " << minutes << "минуты, " << seconds << " секунды" << std::endl;
    } else {
        std::cout << "ошибка при открытий файла" << std::endl;
    }

    return 0;
}