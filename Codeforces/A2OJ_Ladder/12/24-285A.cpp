// NOT CORRECT

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, t;
  cin >> n >> t;
  for (int i = t + 1; i > 0; i--)
    cout << i << " ";
  for (int i = n - t + 1; i <= n; i++)
    cout << i << " ";
}