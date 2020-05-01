#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  while (t > 0)
  {
    t--;
    int count = 0;
    // int a[3];
    // int min=11,minInd;
    // for(int i=0;i<3;i++){
    //   scanf("%d",&a[i]);
    //   if(a[i]<=min){
    //     min=a[i];
    //     minInd=i;
    //   }
    // }
    // if (a[0]==)
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0)
    {
      count++;
      a--;
    }
    if (b > 0)
    {
      count++;
      b--;
    }
    if (c > 0)
    {
      count++;
      c--;
    }
    if (b > a)
    {
      a = a + b;
      b = a - b;
      b = a - b;
    }
    if (c > a)
    {
      a = a + c;
      c = a - c;
      c = a - c;
    }
    if (c > b)
    {
      b = b + c;
      c = b - c;
      b = b - c;
    }
    if (a > 0 && b > 0)
    {
      count++;
      a--;
      b--;
    }
    if (a > 0 && c > 0)
    {
      count++;
      a--;
      c--;
    }
    if (c > 0 && b > 0)
    {
      count++;
      b--;
      c--;
    }
    if (a > 0 && c > 0 && b > 0)
    {
      count++;
    }
    printf("%d\n", count);
  }
}