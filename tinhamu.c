#include <stdio.h>

#include<math.h>
int main() {
    float luong, tiendongthue, luongrong;
    scanf("%f", &luong);
    if(luong>=15){
        tiendongthue = luong * 0.3;
    } else if (luong>=7&&luong<=15) {
        tiendongthue = luong * 0.2;
    } else if (luong<7) {
        tiendongthue = luong * 0.1;
    }
    else{
        tiendongthue = 0;
    }
    luongrong = luong - tiendongthue;

    printf("Luong cua ban la: %.2f\n", luong);
    printf("Tiendongthue cua ban la: %.2f\n", tiendongthue);
    printf("luongrong cua ban la: %.2f\n", luongrong);
}