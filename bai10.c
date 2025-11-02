#include <stdio.h>
#include <math.h>
int is_prime(int n) {
    
    if (n < 2) {
        return 0; 
    }
    if (n == 2) {
        return 1; 
    }
    if (n % 2 == 0) {
        return 0; 
    }
    
	for (int i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1; 
}

int main() {
    int n, i;
    int arr[100];
    int found_prime = 0; 
    
    printf("Nhap so phan tu cua mang (1-100): ");
    if (scanf("%d", &n) != 1) {
        printf("Loi: Nhap khong phai so nguyen.\n");
    }
    
    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le \n");
    }
    
    printf("Nhap %d phan tu: \n", n);
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
             printf("Loi: Nhap khong phai so nguyen. Ket thuc chuong trinh \n");
        }
    }

    printf("\nCac so nguyen to trong mang la: ");

    for (i = 0; i < n; i++) {
        if (is_prime(arr[i])) { 
            printf("%d ", arr[i]);
            found_prime = 1;
        }
    }

    if (found_prime=0) { 
        printf("Khong co so nguyen to nao.");
    }
    
    return 0;
}
