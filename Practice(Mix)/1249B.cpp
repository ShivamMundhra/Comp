#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
  int q;
  cin >> q;
  while (q > 0)
  {
    q--;
    int n;
    cin >> n;
    int a[n];
    int temp;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int c;
    for (int i = 0; i < n; i++)
    {
      c = 0;
      int t2 = a[i] - 1;
      while (t2 != i)
      {
        c++;
        t2 = a[t2] - 1;
      }
      cout << (c + 1);
      if (i != n - 1)
        cout << " ";
      else
        cout << endl;
    }
  }
}