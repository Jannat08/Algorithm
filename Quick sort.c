#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int start, int end)
{
    int pivot = A[start];
    int i = start + 1;
    int j = end;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // when i>j , Swap A[start] and A[j]
    temp = A[start];
    A[start] = A[j];
    A[j] = temp;
    return j; // after partition return the value of pivot
}

void quickSort(int A[], int start, int end)
{
    int partitionIndex; // Index of pivot after partition

    if (start < end)
    {
        partitionIndex = partition(A, start, end);
        quickSort(A, start, partitionIndex - 1);  // sort left sub array
        quickSort(A, partitionIndex + 1, end); // sort right sub array
    }
}

int main()
{
    int A[100], n, i;
    printf("Enter number of elements in array:\n");
    scanf("%d", &n);
    printf("Enter %d elements of array:\n", n);

    for (i = 0; i < n; i++)
    scanf("%d", &A[i]);

    quickSort(A, 0, n - 1);
    printf("After Quick sort Sorted Array:\n");
    printArray(A, n);
    return 0;
}
