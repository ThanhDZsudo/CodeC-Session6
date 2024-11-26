#include <stdio.h>

int main() {
    double principal, rate, interest, total;
    int months, i;
    printf("Nhap so tien gui ban dau: ");
    scanf("%lf", &principal);
    printf("Nhap lai suat thang (phan tram): ");
    scanf("%lf", &rate);
    printf("Nhap so thang gui: ");
    scanf("%d", &months);
    rate = rate / 100;
    total = principal;
    for (i = 0; i < months; i++) {
        total *= (1 + rate);
    }
    interest = total - principal;
    printf("So tien lai la: %.2lf\n", interest);
    printf("Tong so tien nhan duoc sau thoi gian gui la: %.2lf\n", total);
}

