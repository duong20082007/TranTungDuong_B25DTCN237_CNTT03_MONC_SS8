#include <stdio.h>

int main() {
    int row, col; 
    int i, j;
    int arr[100][100]; 

    printf("Nhap so luong hang (row): ");
    if (scanf("%d", &row) != 1);
    
    printf("Nhap so luong cot (col): ");
    if (scanf("%d", &col) != 1);

    if (row <= 0 || row > 100 || col <= 0 || col > 100) {
        printf("Loi: Kich thuoc phai nam trong khoang 1 den %d!\n", 100);
        return 1;
    }

    printf("\nBat dau nhap tung phan tu\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("Nhap phan tu A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMang sau khi nhap la :\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%4d", arr[i][j]); 
        }
        printf("\n");
    }

    printf("\nCac phan tu nam tren duong bien la :\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1) {

                printf("%4d", arr[i][j]);
            } else {
                printf("    "); 
            }
        }
        printf("\n");
    }

    return 0;
}
