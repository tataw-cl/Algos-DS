//program to sum the individual digits of a number
#include<stdio.h>
int main(){
    int num,digit;
    //int div;
    int sum=0;
    printf("Enter an integer number: \n");
    scanf("%d", &num);
    int div=num;
    while(div >0){
        digit=div%10;
        sum=sum+digit;
        div=div/10;
    }
    printf("\nThe sum of the individual digits\n of the number %d is %d",num,sum );
return 0;
}