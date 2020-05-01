#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <list>
#include <cassert>
#include <climits>
#include <bitset>
#include <chrono>
#include <random>
using namespace std;

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;

// Function to return
// gcd of a and b
int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

int main()
{
  int t;
  cin >> t;
  while (t > 0)
  {
    t--;
    int n;
    cin >> n;
    int a[n], b[n];
    vector<pair<int, int>> v;
    int m = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      int flag = 0;
      for (int j = 0; j < v.size(); j++)
      {
        if (gcd(a[i], v[j].first) != 1)
        {
          b[i] = v[j].second;
          flag = 1;
          break;
        }
      }
      if (flag == 0)
      {
        m++;
        b[i] = m;
        v.pb(mp(a[i], m));
      }
    }
    cout << m << endl;
    for (int i = 0; i < n; i++)
    {
      cout << b[i];
      if (i != n - 1)
        cout << " ";
      else
        cout << endl;
    }
  }
}