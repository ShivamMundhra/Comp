#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t > 0)
  {
    t--;
    int a, b;
    cin >> a >> b;
    int a1 = a % 10;
    int a2 = a / 10;
    int b1 = b % 10;
    int b2 = b / 10;
    int c1 = 0, c2 = 0;
    if (a2 > 0)
      c1 = b1 - a2;
    if (b2 > 0)
      c2 = a1 - b2;
    if (c1 > 0 && c2 > 0)
    {
      if (c1 > c2)
        swap(b1, a2);
      else
        swap(a1, b2);
    }
    else if (c1 > 0 && c2 <= 0)
      swap(b1, a2);
    else if (c1 <= 0 && c2 > 0)
      swap(a1, b2);
    int output = (a2 + b2) * 10 + a1 + b1;
    cout << output << endl;
  }
}