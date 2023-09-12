#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n){
    int Min, temp;

    for (int i = 0; i < n-1; i++)
    {
        Min = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[Min]){
                Min = j;
            }
        }
         // Swap A[i] and A[Min]

        temp = A[i];
        A[i] = A[Min];
        A[Min] = temp;
    }
}

int main(){
    int A[100], n, i;
    printf("Enter number of elements in array:\n");
    scanf("%d", &n);
    printf("Enter %d elements of array:\n", n);

    for (i = 0; i < n; i++)
    scanf("%d", &A[i]);

    selectionSort(A, n);
    printf("After Selection sort Sorted Array:\n");
    printArray(A, n);

    return 0;
}
