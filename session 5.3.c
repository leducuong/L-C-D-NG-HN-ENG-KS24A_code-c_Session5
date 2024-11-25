#include <stdio.h>

int main() {
    int n, sum = 0;
    int i = 1;
    do {
        printf("Nhap mot so nguyen duong: "); 
        scanf("%d", &n); 
     if (n <= 0) {
            printf("So phai la so nguyen duong. Hay thu lai!\n");
        }
    for (i <= n; i++) {
        sum = sum + i; 
    }

   printf("Tong cac so tu 1 den %d la: %d\n", n, sum);

    return 0;
}
