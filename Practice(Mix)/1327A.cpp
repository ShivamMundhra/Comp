#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t > 0)
  {
    long long int a, b;
    t--;
    cin >> a >> b;
    // cout << a << " b:" << b << endl;
    if ((a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0))
      cout << "NO" << endl;
    else
    {
      if (a >= (b * b))
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
  }
}