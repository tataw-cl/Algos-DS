/*#include<stdio.h>
#include <conio.h>
#define size 10
int largest(int arr[], int n)
{
int large=arr[0], i;
for(i=1;i<n;i++)
{
if(arr[i]>large)
large = arr[i];
}
return large;
}
void radix_sort(int arr[], int n)
{
int bucket[size][size], bucket_count[size];
int i, j, k, remainder, NOP=0, divisor=1, large, pass;
large = largest(arr, n);
while(large>0)
{
NOP++;
large/=size;
}
for(pass=0;pass<NOP;pass++) // Initialize the buckets
{
for(i=0;i<size;i++)
bucket_count[i]=0;
for(i=0;i<n;i++)
{
// sort the numbers according to the digit at passth place
remainder = (arr[i]/divisor)%size;
bucket[remainder][bucket_count[remainder]] = arr[i];
bucket_count[remainder] += 1;
}
// collect the numbers after PASS pass
i=0;
for(k=0;k<size;k++)
{
for(j=0;j<bucket_count[k];j++)
{
arr[i] = bucket[k][j];
i++;
}
}
divisor *= size;
}
}

void main()
{
int arr[size], i, n;
printf("\n Enter the number of elements in the array: ");
scanf("%d", &n);
printf("\n Enter the elements of the array: ");
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
radix_sort(arr, n);
printf("\n The sorted array is: \n");
for(i=0;i<n;i++)
printf(" %d\t", arr[i]);
getch();
}*/


/*
#include<stdio.h>
#define max 10 //unnecessary line of code
int size=5,arr[100],i,x,z,num,j,count; //global variables initialization
int largest(int size){// function to search for the largest number in the list
//so we can have a reference point by which to do more manipulations on...
    int largest=arr[0],x=10;
    for(i=1;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
     count=1;//count is to keep the number of decimal places we're at...
    while((largest/x)>9){
        x=x*10;
        count=count+1;

    }
    return count;
   
}

int digit_p(int num){//This function is simply to get the right-most digit from the interger for comparing
     z=num%10;
    
    return z;//right-most digit
}
void radix_sort(int arr[]){//radix sorter to compare and swap elelemts succesively according to the power value of each digit
    for(int k=0;k<count;k++){
    for (i = 0; i < size; i++)
    {
    if(digit_p(arr[i])>digit_p(arr[i+1])){
        int temp= arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;//swapping
    }
    }
    printf("The premature sorted list is:\n");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }

    for ( j = 0; j < size; j++){
    if(arr[j]>9){
    {
        arr[j]=arr[j]/10;//reduction of the values by 10 for the next set of place value comparing & swapping
    }
    }
    
}

}
    //printing the sorted array
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
}

}
int main(){
   /* printf("Enter the number of elements you'll wanna sort:\n");
    scanf("%d", &size);
    printf("Enter the said elements:\n");
    for(i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    arr[size]={254,68,235,451,200};
    printf("The sorted list is:\n");
    radix_sort(arr[size]);


return 0;
}*/
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