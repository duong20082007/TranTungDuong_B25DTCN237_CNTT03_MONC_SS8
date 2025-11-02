#include <stdio.h>
#include <math.h>
#include <limits.h>
int main(){
	int a[5] = {2,15,40,77,148};
	int i;
	
	for(i = 0 ; i < 5; i++){
		if(a[i] % 2 ==0){
			a[i] += 3;
		} else {
			a[i] += 2;
		}
	}
	
	printf("Mang moi sau khi thay doi ");
	for(i=0;i<5;i++){
		printf("%d ", a[i]);
		if(i<4) printf(", ");
	}
	
	


	return 0;
}

