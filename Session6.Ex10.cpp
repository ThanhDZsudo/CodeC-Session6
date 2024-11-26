#include <stdio.h>

int main() {
    int number;
    int so_nguyen_to = 1;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);

    if (number <= 1) {
        so_nguyen_to = 0;
    } else {
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                so_nguyen_to = 0;
                break;
            }
        }
    }
    if (so_nguyen_to) {
        printf("%d la so nguyen to\n", number);
    } else {
        printf("%d khong phai la so nguyen to\n", number);
    }
}

