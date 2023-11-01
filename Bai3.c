#include<stdio.h>
#define PI 3.14
int main()
{
    float R;
    printf("Nhap vao ban kinh hinh tron: ");
    scanf("%f", &R);
    printf("Dien tich hinh tron la:%.2f.\n", R*PI*R);
    printf("Chu vi hinh tron:%.2f.\n", 2*PI*R);
}