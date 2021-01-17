#include <stdio.h>

int main()
{
  int avg = 0, num, temp;
  printf("Enter the number of elements in the array --> ");
  scanf("%d", &num);
  int array[num];
  for(int i=0 ; i < num ; i++)
  {
    scanf("%d", &temp);
    array[i] = temp;
  }
}
