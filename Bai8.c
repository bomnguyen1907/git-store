#include <stdio.h>

int main() 
{
    int N;

    printf("Moi nhap mot so nguyen duong: ");
    scanf("%d", &N);

    printf("Chu so hang don vi: %d\n", N % 10);
    N /= 10;

    printf("Chu so hang chuc: %d\n", N % 10);
    N /= 10;

    printf("Chu so hang tram: %d\n", N % 10);

    return 0;
}
