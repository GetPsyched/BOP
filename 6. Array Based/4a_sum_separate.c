#include <stdio.h>

int main()
{
  int sum = 0, n;
  printf("Enter the number of elements in the array --> ");
  scanf("%d", &n);
  int array[n];
  for(int i=0 ; i < n ; i++)
  {
    printf("Enter element #%d --> ", i + 1);
    scanf("%d", &array[i]);
  }
  for (int i=0 ; i < n ; i++)
    if (i%2 != 0)
      sum += array[i];
  printf("\nSum of elements in odd positions in the given array is --> %d\n", sum);
  for (int i=0 ; i < n ; i++)
    if (i%2 == 0)
      sum += array[i];
  printf("\nSum of elements in even positions in the given array is --> %d\n", sum);
}
