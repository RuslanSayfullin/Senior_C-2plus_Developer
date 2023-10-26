#!/bin/bash

# Задает исходное и новое расширение файлов
source_extension=".txt"
new_extension=".md"

# Переименовываем файлы
for file in *$source_extension; do
mv "$file" "${file%$source_extension}$new_extension"
done

# Выводим сообщение об успешном завершении
echo "Файлы успешно переименованы"

