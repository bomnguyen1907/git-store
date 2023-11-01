#include<stdio.h>

int main() {
    int chieudai, chieurong;  
    printf("\nchieu dai hinh chu nhat: ");  
    scanf("%d", &chieudai);  
    printf("\nchieu rong hinh chu nhat: ");  
    scanf("%d", &chieurong);  
    printf("\nChu vi hinh chu nhat:%d.", ((chieudai + chieurong) * 2)); 
    printf("\nDien tich hinh chu nhat:%d.", chieudai * chieurong);
    return 0;  
}