#include <stdio.h>

int main() {
    int so = 1; 
    int dl;

    printf("Chuong trinh doan so. Hay nhap mot so:\n");

    do {
        printf("Nhap so cua ban: ");
        scanf("%d", &dl);

        if (dl != so) {
            printf("Sai roi, hay thu lai!\n");
        }
    } while (dl != so);

    printf("Chinh xac! So ban vua nhap la %d\n", so);

    return 0;
}
