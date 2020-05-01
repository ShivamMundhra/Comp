#include <stdio.h>
#include <limits.h>
float angle(int x1, int y1, int x2, int y2)
{
  if (x1 == x2)
    return INT_MAX;
  else
    return ((y2 - y1) / (float)(x2 - x1));
}
float max(float x, float y)
{
  return x > y ? x : y;
}
float min(float x, float y)
{
  return x < y ? x : y;
}
int main()
{
  int t;
  scanf("%d", &t);
  while (t > 0)
  {
    t--;
    int count = 0;
    int n, q;
    scanf("%d %d", &n, &q);
    int a[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //   printf("%d->", a[i]);
    // }
    // printf("\n");
    int x1, x2, y;
    for (int i = 0; i < q; i++)
    {
      count = 0;
      scanf("%d %d %d", &x1, &x2, &y);
      // printf("%d %d %d", x1, x2, y);
      for (int j = 0; j < n - 1; j++)
      {
        if ((a[j] > y && a[j + 1] > y) || (a[j] < y && a[j + 1] < y))
          continue;
        // printf("Hello %d\n", j);
        else
        {
          float ang1 = angle(j + 1, a[j], x1, y);
          float ang2 = angle(j + 1, a[j], x2, y);
          float ang3 = angle(j + 1, a[j], j + 2, a[j + 1]);
          if (ang1 > 0 && ang2 > 0)
          {
            if (ang3 <= ang1 && ang3 >= ang2)
              count++;
          }
          else if (ang1 < 0 && ang2 > 0)
          {
            if (ang3 >= ang1 && ang3 <= ang2)
              count++;
          }
          else
          {
            if (ang3 < ang1 || ang3 > ang2)
              count++;
          }
          // printf("World %d\n", count);
        }
      }
      printf("%d\n", count);
    }
  }
}