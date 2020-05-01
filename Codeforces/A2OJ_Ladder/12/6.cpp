#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  int min = INT_MAX, max = INT_MIN, count = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (i == 0)
    {
      min = a[i];
      max = a[i];
      continue;
    }
    if (a[i] > max)
    {
      max = a[i];
      count++;
    }
    if (a[i] < min)
    {
      min = a[i];
      count++;
    }
  }
  cout << count;
}