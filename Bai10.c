#include <stdio.h>

int main() {
    int tongSoGiay, gio, phut, giay;

    printf("Tong so giay da qua trong ngay: ");
    scanf("%d", &tongSoGiay);

    gio = tongSoGiay / 3600;
    tongSoGiay %= 3600;
    phut = tongSoGiay / 60;
    giay = tongSoGiay % 60;

    printf("Bay gio la: %02d:%02d:%02d\n", gio, phut, giay);

    return 0;
}
