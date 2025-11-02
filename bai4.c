#include <stdio.h>

int main(void) {
    int n;
    int i;  

    printf("Nhap so phan tu cua mang: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int a[n];  

    printf("Nhap cac phan tu cua mang: \n");
    for (i = 0; i < n; i++) { 
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nCac phan tu trong mang la: \n");
    for (i = 0; i < n; i++) { 
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}

