#include <stdio.h>
int main(){
	
	int i[] = {1, 2, 3, 4}, n, m;
	for (n=0; n<=3; n++){
		printf("%d\n", i[n]);
	}
	m = sizeof(i)/sizeof(int);
	printf("do dai mang: %d",m);
	return 0;
}