#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t > 0)
  {
    t--;
    ll n, m;
    cin >> n >> m;
    ll c = 0;
    ll temp = m;
    for (ll i = 1; i < n; i++)
    {
      // if (temp - (i * (i + 1) / 2) >= 0)
      //   c++;
      // else
      //   break;
      temp -= i;
      if (temp > 0)
        c++;
      else
        break;
    }
    temp = m - (c * (c + 1)) / 2;
    // cout << "temp:" << temp << " C:" << c << endl;
    for (ll j = 0; j < n; j++)
    {
      if (j < n - 2 - c)
        cout << "a";
      else if (j == n - c - 2 || j == n - temp)
        cout << "b";
      else if (j > n - c - 2 && j != n - temp)
        cout << "a";
    }
    cout << endl;
  }
}