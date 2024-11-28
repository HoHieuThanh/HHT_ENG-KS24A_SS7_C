#include <stdio.h>
int main(){
	
	int n = 1;
	int i[n];
	
	for(;n<=5;n++){
		printf("nhap vao phan tu thu %d cua mang:",n);
		scanf("%d",&i[n]);
	}
	printf("gia tri cua mang la: ");
	for(n=1;n<=5;n++){
		printf("%d ",i[n]);
	}
	return 0;
}