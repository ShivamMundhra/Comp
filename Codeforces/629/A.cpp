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
    ll a, b, c;
    cin >> a >> b;
    if (a % b == 0)
      cout << "0" << endl;
    else
    {
      c = ((a / b) + 1) * b - a;
      cout << c << endl;
    }
  }
}