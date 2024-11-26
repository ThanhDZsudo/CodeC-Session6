#include <stdio.h>

int main() {
    int year, month, days;
    printf("Nh?p nam: ");
    scanf("%d", &year);
    printf("Nh?p tháng: ");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        } else {
            days = 28;
        }
    } else {
        printf("Thang khong hop le\n");
    }
    printf("Thang %d nam %d co %d ngay.\n", month, year, days);
}

