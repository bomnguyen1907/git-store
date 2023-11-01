#include <stdio.h>

int main() {
    int usd;
    int vnd;
    int ti_gia_doi = 24.545; // Giả sử tỉ giá hiện hành là 24.545 VND/USD

    printf("Nhap so tien USD ban muon chuyen doi: ");
    scanf("%d", &usd);

    vnd = usd * ti_gia_doi;

    printf("%d USD tuong ung voi %d VND.\n", usd, vnd);

    return 0;
}
