#include<stdio.h>
//function to implement binary search
void binary_search(int arr[], int n, int x){ 
    int beg,mid,end,index=-1;
    end=n;//initializing the end to be the last index of the array
    beg=0;//initializing beginning to be the first index of the array
    for (int i = 0;i<n;i++) {
        mid=(beg+end)/2;//setting mid to be the middle of the list or array
        if (arr[mid]<x) {// if the array of index middle, i.e arr[mid] is less than the value we're
        //searching for, we set "beg" to be the middle +1 and redo the process 
            beg=mid+1; 
        }
        else if (arr[mid]>x){
            end=mid-1;//if the value is larger, then we set the end to be the middle +1, then we redo again
        }
        else{
            index=mid; //else, we have found our value, and we set the index to be the said value and return it...
        }
}
//line of code to check if the index has changed, then we either print it's value, or print that it isn't there accordingly
if (index!=-1){
    printf("\n%d has been found at index %d", x,index);
}
else{
    printf("\nThe value you're looking for isn't in the list");
}
}

//runner code to test the function
int main(){
    int x;
    printf("\nThe binary search algorithm works only on sorted lists. So don't search for in an unsorted list\n");
     printf("What value are you searchung for?: ");
    scanf("%d", &x);
    int Array[]={1,2,4,5,8,15,45,89,100,123,154,187,198,210};
    int size=sizeof(Array)/sizeof(Array[0]);//returns the size of the array, i.e, the number of elements present
    binary_search(Array,size,x);
    return 0;
}