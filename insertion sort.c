#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionSort(int *A, int n){
    int key, j;
    // Loop for passes
    for (int i = 1; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;
        // Loop for each pass
        while(j>=0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main(){

    int A[100], n, i;
    printf("Enter number of elements in array:\n");
    scanf("%d", &n);
    printf("Enter %d elements of array:\n", n);

    for (i = 0; i < n; i++)
    scanf("%d", &A[i]);

    insertionSort(A, n);

    printf("After insertion sort Sorted Array:\n");
    printArray(A, n);
    return 0;
}
