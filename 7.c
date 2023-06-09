#include <stdio.h>

int main() {
    // создаём переменные для:
    // 1) количества чисел последовательности, которые будут введены (cnt)
    // 2) количества нулей в последовательности (zeros)
    // 3) количества положительных чисел в последовательности (positive)
    // 4) количества отрицательных чисел в последовательности (negative)
    // 5) текущего числа последовательности (curr)
    // создаём их типа int, так как все значения будут ТОЛЬКО целыми числами
    int cnt, zeros = 0, positive = 0, negative = 0, curr;
    // вводим с клавиатуры значение для переменной cnt
    scanf("%d", &cnt);
    // создаём цикл на cnt итераций (введём cnt чисел последовательности)
    for (int i=0; i<cnt; i++) {
        // вводим новое число последовательности
        scanf("%d", &curr);
        // если число - 0, то прибавляем 1 к счётчику zeros
        if (curr == 0) zeros++;
        // если число полоижительное, то прибавляем 1 к счётчику positive
        if (curr > 0) positive++;
        // если число отрицательное, то прибавляем 1 к счётчику negative
        if (curr < 0) negative++;
    }
    // выводим результаты - zeros, positive, negative
    printf("%d %d %d", zeros, positive, negative);
    return 0;
}
