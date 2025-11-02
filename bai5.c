#include <stdio.h>

int main() {
    int a[5] = {2, 15, 50, 75, 150};
    int max = a[0];
    int min = a[0];
    int i;

    for (i = 1; i < 5; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("Phan tu lon nhat: %d\n", max);
    printf("Phan tu nho nhat: %d\n", min);

    return 0;
}

