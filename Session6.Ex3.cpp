#include <stdio.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    delta = b * b - 4 * a * c;
    if (a == 0) {
        if (b != 0) printf("Nghiem: x = %.2f\n", -c / b);
        else printf(c == 0 ? "Vo so nghiem\n" : "Vo nghiem\n");
    } else {
        if (delta > 0) {
            x1 = (-b + (delta > 0 ? 1 : -1) * delta / 2 * a);
            x2 = (-b - (delta > 0 ? 1 : -1) * delta / 2 * a);
            printf("Hai nghiem: x1 = %.2f, x2 = %.2f\n", x1, x2);
        } else if (delta == 0) {
            printf("Nghiem kep: x = %.2f\n", -b / (2 * a));
        } else {
            printf("Vo nghiem\n");
        }
    }
}

