#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n + 1];
  memset(a, 0, sizeof(a));
  vector<int> v;

  for (int i = 0; i < n + 1; i++)
  {
    cout << "vector " << a[i] << " ";
    v.push_back(i + 1);
  }
  for (int i = 0; i < v.size(); i++)
  {
    cout << "vector " << v[i] << " ";
  }
}