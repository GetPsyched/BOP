#include<stdio.h>
int main()
{
  int n,i,large_2,large;
  printf("Number of entries are ");
  scanf("%d",&n);
  int num[n];
  for(i=0;i<n;i++)
  {
    printf("enter the number ");
    scanf("%d",&num[i]);
  }
  if(num[0]>num[1])
  {
  large=num[0];
  large_2=num[1];
}
else
{
large=num[1];
  large_2=num[0];
	
}
  for(i=2;i<n;i++)
  {
    if(large<num[i])
    {
    large_2=large;
    large=num[i];
}
    else if(large>num[i])
    large_2=num[i];
  }
  printf("%d is the second largest",large_2);
  return 0;
}
