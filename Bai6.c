#include <stdio.h>

int main()
{
    int diem_thi_m1, diem_thi_m2;
    float diem_trung_binh;
    int DVHT_m1 = 8, DVHT_m2 = 10;

    printf("Ban hay nhap vao diem hai mon hoc:\n");

    printf("Diem thi mon 1: ");
    scanf("%d", &diem_thi_m1);

    printf("Diem thi mon 2: ");
    scanf("%d", &diem_thi_m2);

    diem_trung_binh = (float)(diem_thi_m1 * DVHT_m1 + diem_thi_m2 * DVHT_m2) / (DVHT_m1 + DVHT_m2);

    printf("Diem trung binh hoc ki: %.2f\n", diem_trung_binh);

    return 0;
}
