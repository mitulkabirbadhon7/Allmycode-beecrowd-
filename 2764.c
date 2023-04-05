#include <stdio.h>

int main() {
    char date[8];
    int day, month, year;

    while(scanf("%s", date) == 1) {

        scanf(date, "%d/%d/%d", &day, &month, &year);


        printf("%02d/%02d/%02d\n", month, day, year);


        printf("%02d/%02d/%02d\n", year, month, day);


        printf("%02d-%02d-%02d\n", day, month, year);
    }

    return 0;
}
