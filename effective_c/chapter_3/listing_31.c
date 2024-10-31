// Циклический перенос беззнакового целого значения

unsigned int ui = UINT_MAX; // 4,294,967,295 в x86
ui++;
printf("ui = %u\n", ui);    // ui равно 0
ui--;
printf("ui = %u\n", ui);    // ui равно 4,294,967,29