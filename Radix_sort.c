//program for the C implementation of radix sorting algorithm
#include<stdio.h>
int i;
//int place=(array[i]/exp)%10;
//function to get the max value in the array
int max_val(int array[], int n){
    int max_no=array[0];
    for (i = 1; i < n; i++)
    {
    if(max_no<array[i]){
        max_no=array[i];
    }
    }
    return max_no;    
}

//function to sort the numbers by their place values
void F_sort(int array[],int n, int exp){
    //array to store the sorted elements
    int output[n];
    //count array to store the count of digits
    int count[10]={0};
    for ( i = 0; i < n; i++)
    {
        count[(array[i]/exp)%10]++;
        printf("This is the value of the count[(array[i]/exp)%10]++ role throughout: %d",  count[(array[i]/exp)%10]++ );
    }

    //change count[i] so that count[i] contains the actual position of the digit in output[]
    for ( i = 1; i < 10; i++)
    {
        count[i]+=count[i-1];
    }

    //build the output array
    
    for ( i = n-1; i >=0; i--)
    {
    output[count[(array[i]/exp)%10]-1]=array[i];
    count[(array[i]/exp)%10]--;
    }

    //copy output array so that the array contains sorted numbers according to the current digit
    for ( i = 0; i < n; i++)
    {
    array[i]=output[i];
    }
    
}

//radix sort function to sort array using radix sort algorithm.
void radix_sort(int array[], int n){
    //getting max_no
    int max=max_val(array,n);

    //performing the couting sort for every digit. Instead of passing digit number, exp is passed.
    //exp is 10^i where i is the current digit number

    for (int exp = 1; max/exp>0; exp*=10)
    {
        F_sort(array, n, exp);
    }
    
}

//function for printing
void printArray(int array[], int n){
for ( i = 0; i < n; i++)
{
    printf("%d ", array[i]);
}
printf("\n");

}

//main to test the code

int main(){
    int array[]={170,562,48,967,23,567,54,99,998,48,253,012};
    int n=sizeof(array)/sizeof(array[0]);

    printf("Original array: ");
    printArray(array, n);

        radix_sort(array, n);
    printf("Sorted array: ");
    printArray(array, n);

    return 0;
}