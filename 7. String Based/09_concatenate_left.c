#include <stdio.h>
#include <string.h>

int main()
{
  char x[25], y[25];
  printf("Enter first string --> ");
  gets(x);
  printf("Enter second string --> ");
  gets(y);
  int i, j, temp, n1 = strlen(x), n2 = strlen(y);
  for(i=n2, j=0; i<n1+n2; i++) {
    y[i] = x[j];
    j++;
  }
  y[i] = '\0';
  printf("Concatenated string --> %s\n", y);
}
