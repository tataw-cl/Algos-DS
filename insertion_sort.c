#include<stdio.h>
int n;
void insertion_sort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i]; // Element to be inserted
        int j = i;
        while (j > 0 && temp < arr[j-1])
        {
            arr[j] = arr[j-1]; // Shift the elements progressively
            j--;
        }
        arr[j] = temp; // Actual insertion takes place after all necessary shifts
    }
}

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    printf("Testing insertion sort function\n");

    // Define a test array
    int testArray[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(testArray) / sizeof(testArray[0]);

    // Print the array before sorting
    printf("Before sorting: ");
    printArr(testArray, n);

    // Apply the insertion sort
    insertion_sort(testArray, n);

    // Print the array after sorting
    printf("After sorting: ");
    printArr(testArray, n);

    return 0;
}