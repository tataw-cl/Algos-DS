#include<stdio.h>
int main(){
	int i,j,k=1;
	printf("Enter a number to get it's factorial\n");
	scanf("%d",&j);
	for(i=1;i<=j;i++){
		k=i*k;
		/*printf("%d factorial = %d\n\n\n\n\n\n ",j,k);*/
	}
	printf("%d factorial = %d\n",j,k);
	return 0;
}
