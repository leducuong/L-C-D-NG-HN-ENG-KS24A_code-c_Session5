#include <stdio.h>

int main() {
    int n;
    for (int i = 1; i <= 10; i++);
   
    do {
        printf("Nhap mot so nguyen tu 1 den 10: ");
        scanf("%d", &n);

        if (n < 1 || n > 10) {
            printf("So phai nam trong khoang tu 1 den 10. Hay thu lai!\n");
        }
    } while (n < 1 || n > 10); 

 
    printf("Bang cuu chuong cua %d:\n", n);
     {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
