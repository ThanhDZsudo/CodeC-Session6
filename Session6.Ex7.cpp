#include <stdio.h>

int main() {
    int number, i;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);

    printf("Cac uoc cua %d l�: ", number);
    for (i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

