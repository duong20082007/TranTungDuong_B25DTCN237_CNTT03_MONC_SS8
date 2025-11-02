#include <stdio.h>

int main() {
    int a[5];
    int found = 0;
    int i; 

    printf("Nhap 5 so nguyen: \n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Cac phan tu chan trong mang: \n");
    for (i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            found = 1;
        }
    }

    if (found=0) {
        printf("Mang khong chua so chan ");
    }

    printf("\n");
    return 0;
}

