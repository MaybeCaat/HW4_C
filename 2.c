#include <stdio.h>

// функция void, так как она только выводит календарь, но ничего не возвращает
void printCalendar(int n, int k) {
    // создаём переменную dayOfTheWeek для хранения номера текущего дня недели
    int dayOfTheWeek = n;
    // заполняем пробелами пустое место до первого дня месяца
    // само число у нас занимает 2 символа и ещё 1 пробел между числами,
    // то есть всего 3 пробела на 1 "пропущенное" число
    // заполняем место n-1 "пропущенных" чисел (то есть если 5 день недели - первое число месяца,
    // то пробелами заполняется 4 числа перед этим)
    for (int i=1; i<n; i++) {
        printf("   ");
    }
    // проходимся циклом по всем дням месяца
    for (int dayOfTheMonth=1; dayOfTheMonth<=k; dayOfTheMonth++) {
        // если текущее число меньше 10 (то есть однозначное число),
        // то добавляем перед этим дополнительный пробел
        if (dayOfTheMonth < 10) {
            printf(" ");
        }
        // печатаем текущее число месяца
        printf("%d", dayOfTheMonth);
        // если текущий день недели под номером 7 (то есть последний на неделе)...
        if (dayOfTheWeek == 7) {
            // ...то переходим на новую строку (неделя закончилась)
            printf("\n");
            // ставим номер текущего дня недели на 1 (началась новая неделя)
            dayOfTheWeek = 1;
        } else {
            // ...иначе просто печатаем пробел (это пробел между днями)
            printf(" ");
            // и добавляем 1 к номеру текущего дня недели (переходим на новый день недели)
            dayOfTheWeek += 1;
        }
    }
    // если после вывода всех чисел dayOfTheWeek == 1,
    // то значит мы только что распечатали 7-ой день недели и перешли на новую строку,
    // а значит дополнительный переход на новую строку не нужен
    if (dayOfTheWeek != 1) {
        // иначе печатаем тот самый переход на новую строку
        printf("\n");
    }
}

int main() {
    // создаём переменные для:
    // 1) номера дня недели первого числа месяца (n)
    // 2) количества дней в месяце (k)
    // они будут типа int, так как вводиться будут ТОЛЬКО целые числа
    int n, k;
    // вводим числа n и k с клавиатуры
    scanf("%d %d", &n, &k);
    // вызываем функцию, которая будет выводить календарь
    printCalendar(n, k);
    return 0;
}
