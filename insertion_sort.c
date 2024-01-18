/*#include<stdio.h>
int n;
void insertion_sort(int arr[], int n){
for (int i = 1; i < n; i++)
{
    int temp=arr[i];// Element to be inserted
    for (int j = i; j > 0 && temp<arr[j-1]; j--)
    {
        arr[j]=arr[j-1]; //line of code to shift the elements progressively
        arr[j]=temp;//where actual insertion takes place
    }   
}
}

void printArr(int arr[]){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    printf("How many numbers are you planning on sorting\n");
    scanf("%d", &n);
    int Array[n];
     printf("Enter %d elements into the array: \n", n);
    for (int i=0;i< n;i++)
    {
        scanf("%d", &Array[i]);
    }
    insertion_sort(Array,n);
    printf("Your sorted list is:\n");
    printArr(Array);

    return 0;
}*/

#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;

    // Traverse through the array
    for (i = 1; i < n; i++) {
        key = arr[i]; // Select the element to be inserted
        j = i - 1;

        /*
        Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position
        */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key; // Insert the element in its correct position
    }
}

int main() {
    int arr[] = {5, 2, 8, 12, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    insertionSort(arr, n);

    printf("\nSorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}