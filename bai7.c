#include <stdio.h>

int main() {
    int n;
    int i; 
    int ele;


    printf("Nhap so luong phan tu cua mang (N): ");
    scanf("%d", &n);

    int mang[n]; 


    for (i = 0; i < n; i++) {
        do {
            printf("Nhap phan tu thu %d (Phai la SO LE): ", i + 1);
            scanf("%d", &ele);

            if (ele % 2 != 0) {
                mang[i] = ele;
                break; 
            } else {
                printf("LOI: KHONG phai la so le. Vui long nhap lai \n",ele);
            }
        } while (1);
    }

    printf("\nMang so le da nhap\n");
    for (i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
