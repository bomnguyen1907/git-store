#include<stdio.h>

int main()
{
    int namsinh, namhientai;
    printf("\nNhap nam sinh cua ban: ");
    scanf("%d", &namsinh);
    printf("\nNhap namhientai: ");
    scanf("%d", &namhientai);
    printf("\nNam nay ban bao nhieu tuoi:%d.",namhientai-namsinh);
    return 0;
}   