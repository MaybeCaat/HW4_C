#include <stdio.h>

int main() {
    int month, year;
    scanf("%d %d", &month, &year);
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)) {
        printf("29");
    } else {
        printf("%d", days[month]);
    }
    return 0;
}
