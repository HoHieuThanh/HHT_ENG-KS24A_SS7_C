#include<stdio.h>
int main() {
	
	int n, i;
	printf("nhap vao so phan tu cua mang:");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++){
		printf("nhap vao phan tu thu %d cua mang:",i);
		scanf("%d",&num[i]);
	}
	
	return 0;
}