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
    int a[9];
    for (int i = 0; i < 9; i++)
    {
      cin >> a[i];
    }
    if (a[0] < 900000000)
      a[0] += 100000000;
    else
      a[0] -= 100000000;
    if (a[3] % 100000000 < 90000000)
      a[3] += 10000000;
    else
      a[3] += 10000000;
    if (a[6] % 10000000 < 9000000)
      a[6] += 1000000;
    else
      a[6] -= 1000000;
    if (a[1] % 1000000 < 900000)
      a[1] += 100000;
    else
      a[1] -= 100000;
    if (a[4] % 100000 < 90000)
      a[4] += 10000;
    else
      a[4] -= 10000;
    if (a[7] % 10000 < 9000)
      a[7] += 1000;
    else
      a[7] -= 1000;
    if (a[2] % 1000 < 900)
      a[2] += 100;
    else
      a[2] -= 100;
    if (a[5] % 100 < 90)
      a[5] += 10;
    else
      a[5] -= 10;
    if (a[8] % 10 < 9)
      a[8] += 1;
    else
      a[8] -= 1;
    for (int i = 0; i < 9; i++)
    {
      cout << a[i] << "\n";
    }
  }
}