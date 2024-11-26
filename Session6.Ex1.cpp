#include <stdio.h>

int main() {
    int number, sum = 0;
    for (int i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &number);
        if (number % 2 != 0) sum += number;
    }
    printf("Tong cac so la là: %d\n", sum);
}

