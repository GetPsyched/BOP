#include<stdio.h>

int main()
{
  int count = 0;
  char x[25], y[25];
  printf("Enter a string --> ");
  gets(x);
  for(int i=0; x[i] != '\0'; i++)
    y[i] = x[i];
  printf("Copied string --> %s\n", y);
}
