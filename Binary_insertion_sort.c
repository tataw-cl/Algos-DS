#include <stdio.h>

// Function to perform binary search
int binarySearch(int a[], int item, int low, int high) {
    if (high <= low)
        return (item > a[low])?  (low + 1): low;
 
    int mid = (low + high)/2;
 
    if(item == a[mid])
        return mid+1;
 
    if(item > a[mid])
        return binarySearch(a, item, mid+1, high);
    return binarySearch(a, item, low, mid - 1);
}

// Function implementing binary insertion sort
void insertionSort(int a[], int n) {
    int i, loc, j, k, selected;
 
    for (i = 1; i < n; ++i) {
        j = i - 1;
        selected = a[i];
 
        // find location where selected should be inserted
        loc = binarySearch(a, selected, 0, j);
 
        // Move all elements after location to create space
        while (j >= loc) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = selected;
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {37, 23, 0, 17, 12, 72, 31, 46, 100, 88, 54};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    printf("Array before sorting: \n");
    printArray(arr, n);
 
    insertionSort(arr, n);
 
    printf("\n\nArray after sorting: \n");
    printArray(arr, n);
 
    return 0;
}