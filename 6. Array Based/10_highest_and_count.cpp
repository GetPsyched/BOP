#include<stdio.h>

int main(){
    int n, smaller=0, equal=0, large;
    printf("Enter the number of elements in the array --> ");
    scanf("%d", &n);
    int array[n];
    for(int i=0 ; i < n ; i++)
    {
      printf("Enter element #%d --> ", i + 1);
      scanf("%d", &array[i]);
    }
    large = array[0];
    for(i=1; i < n; i++)
      if(array[i] > large)
        large = array[i];

    for(int i=0; i < n; i++)
      if(large > array[i]) smaller++;
      else equal++;

    printf("\nNumber of elements lesser than max value --> %d", smaller);
    printf("Number of elements lesser than max value --> %d\n", equal);
}
