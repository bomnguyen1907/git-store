#include <stdio.h>

int main() 
{
    int soDVHTLT, soDVHTTH;
    float soTienDVHTLT, soTienDVHTTH, tongTien;

    printf("Ban hay nhap vao:\n");

    printf("So DVHTLT: ");
    scanf("%d", &soDVHTLT);

    printf("So DVHTTH: ");
    scanf("%d", &soDVHTTH);

    printf("So tien cho mot DVHTLT: ");
    scanf("%f", &soTienDVHTLT);

    printf("So tien cho mot DVHTTH: ");
    scanf("%f", &soTienDVHTTH);

    tongTien = soDVHTLT * soTienDVHTLT + soDVHTTH * soTienDVHTTH;

    printf("Ket qua, ban phai dong: %.0f\n", tongTien);

    return 0;
}
