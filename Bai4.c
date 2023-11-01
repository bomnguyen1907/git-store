#include <stdio.h>

int main()
{
    float a, b;
    printf("a:");
    scanf("%f", &a);
    printf("b:");
    scanf("%f", &b);
    printf("%.2f + %.2f = %.2f\n", a, b, a+b);
    printf("%.2f - %.2f = %.2f\n", a, b, a-b);
    printf("%.2f * %.2f = %.2f\n", a, b, a*b);
    printf("%.2f / %.2f = %.2f\n", a, b, a/b);
    return 0;
}