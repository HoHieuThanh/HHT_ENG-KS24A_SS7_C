#include<stdio.h>
int main(){
	
	int i, num []={3,7,4,9,2};
	int max = num[0];
	int min = num[0];
	
	for(i=1;i<=4;i++){
		if(num[i] > max){
			max = num[i];
		}
	}
	printf("so lon nhat trong mang la: %d\n",max);
	
	for(i=1;i<=4;i++){
		if(num[i] < min){
			min = num[i];
		}
	}
	printf("so nho nhat trong mang la: %d",min);
	
	return 0;
}