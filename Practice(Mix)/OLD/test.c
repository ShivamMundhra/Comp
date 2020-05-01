#include <stdio.h>
int main()
{
  char a;
  scanf("%c", &a);
  int t = 78;
  a = (char)t;
  printf("%d\n", (int)a);
  printf("%c\n", a);
  if ((int)a == 115)
  {
    printf("Hello");
  }
  else
    printf("Hi");
}