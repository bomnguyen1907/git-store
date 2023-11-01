#include <stdio.h>

int main() {
    int N, M = 0, temp, tong;

    printf("Nhap vao mot so nguyen duong co ba chu so: ");
    scanf("%d", &N);

    temp = N;

    // Dao nguoc so N
    while (temp != 0) {
        M = M * 10 + temp % 10;
        temp /= 10;
    }

    printf("So dao nguoc cua %d la: %d\n", N, M);

    // Tinh tong cua N va M
    tong = N + M;

    printf("Tong cua %d va %d la: %d\n", N, M, tong);

    return 0;
}
