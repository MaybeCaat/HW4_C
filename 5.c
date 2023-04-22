#include <stdio.h>

int main() {
    // создаём переменные для:
    // 1) суммы всех чисел последовательности (sum)
    // 2) количества чисел последовательности (cnt)
    // 3) текущего числа последовательности (curr)
    // создаём их типа float, чтобы в конце не округлялся ответ
    float sum = 0, cnt = 0, curr;
    // вводим с клавиатуры текущее (первое) число последовательности
    scanf("%f", &curr);
    // создаём цикл, который работает пока текущее число последовательности - НЕ 0
    while (curr != 0) {
        // добавляем текущее число к сумме sum
        sum += curr;
        // добавляем 1 к счётчику cnt
        cnt++;
        // сканируем новое число последовательности
        scanf("%f", &curr);
    }
    // выводим среднее арифметическое - сумму sum / количество cnt
    printf("%f", sum / cnt);
    return 0;
}