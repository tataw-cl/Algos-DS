#include<stdio.h>
#include<string.h>
//Recursive program to serve as power function
/*int power(int base, int exp){
    //initialization of base case for exp=0
if(exp==0){
    return 1;//anything raised to 0=1
}
else if(exp>0){
    //function to recursively get the base of positive integer
    return base *power(base, exp-1);//returns the base*itself for exp times untill it reaches 0
}
else{
    return 1/base* power(base, exp+1); //backup function for in the case where the base is <0
}

}

int main(){
    //main function to test power function.
    int val,num,p;
    printf("Enter the base of the calculation\n");
    scanf("%d", &num);

    printf("Enter the power value of the calculation\n");
    scanf("%d", &p);\
    printf("Answer of %d^%d = %d", num,p,power(num,p));
return 0;
}*/

/*
//Recursive program to print numbers from 0 to n;...
void prnt(int n){
    //creation of base case to build from
    if(n==0){
        printf("%d ", n);// if the call reaches 0, we end and start printing from there till n...
        return;
    }
    else{
        prnt(n-1);
    printf("%d ", n);// printng of n when we exit the upper recursive call which prints n-1 too...
}
}

int main(){
    //MAIN FUNCTION TO TEST FUNCTION
    int a;
    printf("Enter the value of the last number we're printing to\n");
    scanf("%d", &a);

    printf("Number from 0 to %d\n",a);
    prnt(a);
    return 0;
}*/

/*
void reverser(char* p){
    if(*p =='\0'){//innitialization of base and concluding case to end
        return;
    }
    else{
        reverser(p+1);//will recurse till '\0', the start printng from there all the characters that follow in reverse order
                printf("%c", *p);//code snippet for the printing of p from the back to front
    }
}

int main(){
    char str[100];
    printf("Enter a string of less than 100 characters\n");
    fgets(str, sizeof(str), stdin);
    
    reverser(str);
    return 0;
} */

/*void prime(int n){
    if(n==2){
        printf("The number is prime");
        return;
    }
    else
{
    if((n % prime(n-1)==0)){
        printf("The number is not prime");
    }
    return;
}

}*/

void  primer(int n, int x){
    if(n<=2){
        printf("Your number is less than 2, so it's prime\n");
    }
    else if (n%x==0)
    {
printf("The number is not prime\n");        
    }
    else if (x*x>n){
        printf("The number is prime\n");
    }
    else{
        return primer(n, x+1);
    }
       
    }

    int main(){
        int num;
        printf("Enter a number to check if it is prime...\n");
        scanf("%d", &num);
        primer(num, 2);
    }