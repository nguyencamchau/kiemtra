/*
Viết chương trình nhập vào dãy số thực, xuất dãy số, đếm dãy số có bao nhiêu phần tử có phần nguyên dương và chia hết cho 3; 
nhập vào dãy số thực, xuất dãy số, đếm dãy số có bao nhiêu phần tử có phần nguyên dương và chia hết cho 3, mỗi chức năng là một hàm.
*/
#include <stdio.h>

// Hàm nhập dãy số thực
void nhap(float a[], int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

// Hàm xuất dãy số thực
void xuat(float a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.3f ", a[i]);
    }
}

// Hàm đếm phần tử có phần nguyên dương và chia hết cho 3
int dem(float a[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        int phanNguyen = (int)a[i];

        if (phanNguyen > 0 && phanNguyen % 3 == 0) {
            count++;
        }
    }

    return count;
}

// Hàm main chỉ gọi các hàm 
int main() {
    float a[100];
    int n;

    nhap(a, &n);

    printf("\nDanh sach vua nhap:\n");
    xuat(a, n);

    int kq = dem(a, n);

    printf("\nSo phan tu co phan nguyen duong va chia het cho 3: %d\n", kq);

    return 0;
}
