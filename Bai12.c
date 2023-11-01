#include <stdio.h>

int main() {
    char kiTu;

    printf("Nhap vao mot ki tu: ");
    scanf("%c", &kiTu);

    printf("Ma ASCII cua ki tu '%c' la: %d\n", kiTu, kiTu);
    printf("Ki tu dung truoc '%c' la: '%c'\n", kiTu, kiTu - 1);
    printf("Ki tu dung sau '%c' la: '%c'\n", kiTu, kiTu + 1);

    return 0;
}
