#include <stdio.h>
#include <ctype.h>

int main() {
    char kiTu, kiTuDoi;

    printf("Nhap vao mot ki tu: ");
    scanf("%c", &kiTu);

    if (islower(kiTu)) {
        kiTuDoi = toupper(kiTu);
        printf("Ki tu in hoa tuong ung voi '%c' la: '%c'\n", kiTu, kiTuDoi);
    } else if (isupper(kiTu)) {
        kiTuDoi = tolower(kiTu);
        printf("Ki tu in thuong tuong ung voi '%c' la: '%c'\n", kiTu, kiTuDoi);
    } else {
        printf("'%c' khong phai la mot ki tu chu cai.\n", kiTu);
    }

    return 0;
}
