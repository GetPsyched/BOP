#include <stdio.h>
#include <string.h>

char reverse(char str[])
{
  char reverse[100];
  int len, i, index, wordStart, wordEnd;

  len   = strlen(str);
  index = 0;

  wordStart = len - 1;
  wordEnd   = len - 1;

  while(wordStart > 0)
  {
    if(str[wordStart] == ' ')
    {
        i = wordStart + 1;
        while(i <= wordEnd)
        {
          reverse[index] = str[i];
          i++;
          index++;
        }
        reverse[index++] = ' ';
        wordEnd = wordStart - 1;
    }
    wordStart--;
  }
  for(i=0; i<=wordEnd; i++)
  {
    reverse[index] = str[i];
    index++;
  }
  reverse[index] = '\0';
  printf("Reversed string --> %s\n", reverse);
}

int main()
{
  char str[25];
  printf("Enter a string --> ");
  gets(str);
  reverse(str);
}
