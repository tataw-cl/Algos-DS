#include<stdio.h>
//prigram to implement linear search and print the index. Doesn't return the index technically, it rather just prints it
void linear_search(int arr[], int n, int x){ //function to perform linear search
int i,index=-1;//setting the index to an impossible index incase the value isn't found
for (i = 0; i <n; i++){ 
    if(arr[i]==x){ //sequentially search through the list for the value x
    index=i;
    }
    }
    if(index!=-1){
    printf("%d has been found at index %d", x,index); //if the value is found, the index is printed and a message is outputed
    }
    else{
        printf("The value %d has not been found", x); //statement for if the value isn't found in the list
    }
    
    }

//driver code to test the function
int main(){
int x;
    printf("What value are you searchung for?");
    scanf("%d", &x);
    int Array[]={12,56,4,45,14,23,25,11};
    int size=sizeof(Array)/sizeof(Array[0]);//returns the size of the array, i.e, the number of elemetns present
    linear_search(Array,size,x);
    }