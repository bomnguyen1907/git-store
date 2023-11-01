#include <stdio.h>

int main() {
    int gio, phut, giay, tongSoGiay;

    printf("Nhap vao gio: ");
    scanf("%d", &gio);

    printf("Nhap vao phut: ");
    scanf("%d", &phut);

    printf("Nhap vao giay: ");
    scanf("%d", &giay);

    tongSoGiay = gio * 3600 + phut * 60 + giay;

    printf("Tong so giay tuong ung: %d\n", tongSoGiay);

    return 0;
}
