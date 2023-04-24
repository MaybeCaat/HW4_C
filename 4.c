#include <stdio.h>
#include <math.h>

// функция void, так как она не возвращает двоичный код, а печатает её
void convertToBinary(int n) {
    // чтобы не использовать лишнюю память, можно рассчитать какой длины будет двоичная форма числа
    // а она будет равна двоичному логарифму числа, округлённую до нижнего числа, к которому прибавили 1
    int len_binary = (int) log2(n) + 1;
    // создаём массив типа int для хранения двоичного кода с длиной, которую мы рассчитали выше
    int binary[len_binary];
    // когда мы переводим число в двоичную систему из десятичной мы в конце переворачиваем его,
    // тогда проще сразу заполнять массив для двоичной формы с конца
    // (так мы ещё знаем его длину, что проще)
    for (int i=len_binary-1; i>= 0; i--) {
        // перевод выполняется в 2 этапа: сначала мы берём остаток от деления текущего числа n на 2
        binary[i] = n % 2;
        // а затем делим текущее число n на 2
        n /= 2;
    }
    // выводим двоичную форму числа n с помощью цикла
    for (int i=0; i<len_binary; i++) {
        printf("%d", binary[i]);
    }
}

int main() {
    // создаём переменную n для целого числа
    int n;
    // вводим число n с клавиатуры
    scanf("%d", &n);
    // вызываем функцию convertToBinary, которая переведёт число в двоичную систему и выведет
    convertToBinary(n);
    return 0;
}