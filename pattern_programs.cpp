#include<stdio.h>
int main(){
	int row,space,num,cha,tot;
	printf("Enter the number of rows wanted\n");
	scanf("%d",&tot);
	for(row=1;row<=tot;row++){
		for(space=1;space<=(tot-row);space++)
		printf(" ");
		for(cha=1;cha<=((2*row)-1);cha++){
		printf("*");}
		printf("\n");
	}
	/*int i,k,j,arr[4][4];
	k=0;
	for(i=0;i<4;i++){
		for(j=3;j>=0;j--){
			arr[i][j]=k;
			k++;
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	int max,min,a,i,b,c,d,e;
	printf("Enter a list of 5 numbers\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	int arr[5]={a,b,c,d,e};
		max=arr[0];
	for(i=0;i<5;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("%d is the largest number\n\n", max);
	min=arr[4];
	for(i=4;i>=0;i--){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("%d is the smallest\n\n",min);
	/*int h,b,z;
	printf("Number \t Square \t Cube\n");
	for(h=0;h<11;h++){
		b=h*h;
		z=h*h*h;
		printf("%d \t %d \t\t %d\n",h,b,z);
	}*/
	return 0;
}
