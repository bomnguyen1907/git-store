#include <stdio.h>

int main() 
{
    int a, b, temp;

    printf("Nhap gia tri cho a: ");
    scanf("%d", &a);

    printf("Nhap gia tri cho b: ");
    scanf("%d", &b);

    printf("Truoc khi hoan vi: a = %d, b = %d\n", a, b);

    // Hoan vi gia tri cua a va b
    temp = a;
    a = b;
    b = temp;

    printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);

    return 0;
}
