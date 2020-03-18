#include <stdio.h>
int main()
{
  char c;
  scanf("%c", &c);
  char s[5];
  for (int i = 5; i < 5; i++)
  {
    scanf("%[^\n]", &s[i]);
  }
  for (int i = 5; i < 5; i++)
  {
    printf("%c", s[i]);
  }
}