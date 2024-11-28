#include<stdio.h>
int main() {
	
	int n, i, count;
	printf("nhap vao so phan tu cua mang:");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++){
		printf("\nnum [%d] =",i);
		scanf("%d",&num[i]);
		count=0;
		for(int m = 2; m <= num[i]; m++){
			if(num[i] % m == 0) {
				count++;
			}
		}
		if(count == 1){
			printf("phan tu %d la so nguyen to\n",num[i]);
		}
	}
	return 0;
}