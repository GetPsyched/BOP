#include<stdio.h>
int main()
{
  int i,n,sum;
  printf("Number of entries are ");
  scanf("%d", &n);
  int num[n];
  for(i=0;i<n;i++)
    scanf("%d", &num[i]);
  for(i=0;i <= n%2 + n/2 - 1;i++)
  {
    sum = num[i] + num[n-1-i];
    printf("Sum of %d: %d\n", i+1, sum);
  }
}
