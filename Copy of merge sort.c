#include <stdio.h>

void merge(int a[], int beg, int mid, int end)
{
    int n = end+1;
    int temp[n];
    int i,j,k;
    i = beg; j = mid+1; k = beg;
    while(i<=mid && j<=end)
    {
        if(a[i]>a[j])
        {
            temp[k]=a[j];
            k++; j++;
        }
        else
        {
            temp[k]=a[i];
            k++; i++;
        }
    }
    while(i<=mid)
    {
        temp[k]=a[i];
        i++; k++;
    }
    while(j<=end)
    {
        temp[k]=a[j];
        j++; k++;
    }
    for(int p=beg; p<=end; p++)
        a[p]=temp[p];
}

void mergeSort(int a[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergeSort(a, beg, mid);
        mergeSort(a, mid + 1, end);
        merge(a, beg, mid, end);
    }
}

/* Function to print the array */
void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array:\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Before sorting array elements are:\n");
    printArray(a, n);
    mergeSort(a, 0, n - 1);
    printf("After sorting array elements are:\n");
    printArray(a, n);
    return 0;
}
