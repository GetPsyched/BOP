#include <stdio.h>

int main()
{
  int day, month, year, flag = 0;
  printf("Enter day --> ");
  scanf("%d", &day);
  printf("Enter month --> ");
  scanf("%d", &month);
  printf("Enter year --> ");
  scanf("%d", &year);
  int mon, y = year % 100, c = year / 100;

  if(month > 2)
    mon = month;
  else
    mon = (12 + month);

  int w = day + (13*(mon+1))/5 + y + y/4 + c/4 + 5*c;
  printf("%d\n", w);
}
