#include <stdio.h>

int main()
{
  int avg = 0, num, temp, large, small;
  printf("Enter the number of elements in the array --> ");
  scanf("%d", &num);
  int array[num];
  for(int i=0 ; i < num ; i++)
  {
    printf("Enter element #%d --> ", i + 1);
    scanf("%d", &array[i]);
  }
  large = array[0];
  for(int i=1 ; i < num ; i++)
  {
    if (array[i-1] > array[i])
      temp = array[i-1];
    else
      temp = array[i];
    if (temp > large)
      large = temp;
  }
  small = array[0];
  for(int i=1 ; i < num ; i++)
  {
    if (array[i-1] > array[i])
      temp = array[i];
    else
      temp = array[i-1];
    if (temp < small)
      small = temp;
  }
  printf("\nLarge number is --> %d", large);
  printf("\nSmall number is --> %d", small);
}
