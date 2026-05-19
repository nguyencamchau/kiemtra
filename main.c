/*
Viết chương trình nhập vào dãy số thực, xuất dãy số, đếm dãy số có bao nhiêu phần tử có phần nguyên dương và chia hết cho 3; 
nhập vào dãy số thực, xuất dãy số, đếm dãy số có bao nhiêu phần tử có phần nguyên dương và chia hết cho 3, mỗi chức năng là một hàm.
*/
#include <stdio.h>

// Hàm nhập dãy số thực
void nhap(float a[], int *n) {
}

// Hàm xuất dãy số thực
void xuat(float a[], int n) {
}

// Hàm đếm phần tử có phần nguyên dương và chia hết cho 3
int dem(float a[], int n) {
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
