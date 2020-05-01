#include <bits/stdc++.h>
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

#define fastIO                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;

int main()
{
  //#ifndef ONLINE_JUDGE
  //  freopen("in.txt", "r", stdin);
  //  freopen("out.txt", "w", stdout);
  //#endif

  fastIO;
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int min = k + 10;
    int q[400005] = {0};
    int a[n], s[n / 2];
    F0R(i, n)
    {
      cin >> a[i];
      if (a[i] < min)
        min = a[i];
    }
    cout << "M:" << min << "\n";
    int maxSum = -1;
    F0R(i, n / 2)
    {
      s[i] = a[i] + a[n - i - 1];
      if (s[i] > maxSum)
        maxSum = s[i];
      q[s[i]]++;
    }
    cout << "K:" << maxSum << "\n";
    int m = 0;
    if (min + k >= maxSum)
    {
      F0R(i, n / 2)
      if (q[s[i]] > m)
        m = q[s[i]];
    }
    else
    {
      F0R(i, n / 2)
      if (q[s[i]] > m && s[i] <= min + k)
      {
        m = q[s[i]];
        cout << "H:";
      }
    }
    cout << n / 2 - m << "\n";
  }
}