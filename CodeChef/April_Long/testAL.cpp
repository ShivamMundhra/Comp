// A Better (than Naive) Solution to find all divisiors
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
// Function to print the divisors
void printDivisors(int n)
{
  // Note that this loop runs till square root
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      // If divisors are equal, print only one
      if (n / i == i)
        v.push_back(i);

      else // Otherwise print both
      {
        v.push_back(i);
        v.push_back(n / i);
      }
    }
  }
}

/* Driver program to test above function */
int main()
{
  printf("The divisors of 192 are: \n");
  printDivisors(3 * 5 * 3);
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << v.size() << endl;
  // int q = log2(3 * 5 * 13 * 29 * 31 * 37 * 7 * 3 * 3);
  // cout << q << endl;

  return 0;
}
