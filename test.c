#include <stdio.h>

int main()
{
  printf("Enter the number of elements in the first array --> ");
  scanf("%d", &n1);
  int array[n1];
  for(int i=0 ; i < n1 ; i++)
  {
    printf("Enter element #%d --> ", i + 1);
    scanf("%d", &array[i]);
  }
  for(int i=0 ; array[i] != '\0' ; i++)
}
