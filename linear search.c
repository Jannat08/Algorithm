#include <stdio.h>
int main()
{
  int array[100], search, i, n;

  printf("Enter number of elements in array:\n");
  scanf("%d", &n);

  printf("Enter %d elements of array:\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (i = 0; i < n; i++)
  {
    if (array[i] == search)
    {
      printf("element: %d is present at index no: %d .\n", search, i);
      break;
    }
  }
  if (i == n)
    printf("element: %d is not present in the array.\n", search);

  return 0;
}
