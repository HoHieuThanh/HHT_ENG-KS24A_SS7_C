#include<stdio.h>
int main(){
	
	int num[] = {1,2,3,4,5};
	
	for(int i=0; i<=4; i++){
		if(num[i]%2==0){
			num[i] = num[i] + 3;
			printf("%d ", num[i]);
		}else{
			num[i] = num[i] + 2;
			printf("%d ", num[i]);
		}
	}
	
	return 0 ;
}