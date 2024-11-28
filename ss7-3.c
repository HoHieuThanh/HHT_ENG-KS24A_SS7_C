#include <stdio.h>
int main(){
	int n=1, i[n], count=0;
	
	for(;n<=5;n++){
		printf("nhap vao phan tu thu %d cua mang:",n);
		scanf("%d",&i[n]);
	}
	
	for(n=1;n<=5;n++){
	
		if(i[n] % 2 ==0){
			count++;
			if(count==1){
				printf("cac so chan trong mang la: ");
			}
			printf("%d ",i[n]);
		}
	}
	if(count==0){
		printf("khong co so chan trong mang");
	}
	
	return 0;
}