#!/bin/bash

# Определите файл входных данных
data_file="data.txt"

# Определите выходной файл
report_file="report.txt"

# Функция обработки данных и формирования отчета
process_data() {
# Инициализация переменные для отчета
total_records=0
total_sales=0

# Обработать файл данных
while IFS=',' read -r name sales; do
if [[ "$name" != "Name" && "$sales" =~ ^[0-9]+$ ]]; then
total_records=$((total_records + 1))
total_sales=$((total_sales + sales))
fi
done < "$data_file"

# Создать отчет
echo "Report generated  on $(date)" > "$report_file"
echo "Total Records Processed: $total_records" >> "$report_file"
echo "Total Sales: $total_sales" >> "$report_file"
echo "Average Sales per Record: $((total_sales / total_records))" >> "$report_file"
echo "-------------------------" >> "$report_file"

tail -n +2 "$data_file" | sort -t',' -k2 -n -r | head -n 5 | cut -d',' -f1 >> "$report_file"

echo "Report generation complete. Saved to $report_file"
}
# Основной скрипт
process_data
