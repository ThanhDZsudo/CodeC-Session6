#include <stdio.h>

int main() {
    int number, a = 0, b = 0;
    printf("Nhap vao 5 so nguyen: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &number);
        if (number % 2 == 0) {
            a++;
        } else {
            b++;
        }
    }
    printf("So luong so chan: %d\n", a);
    printf("So luong so le: %d\n", b);
}

