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
    int n;
    cin >> n;
    if (n % 4 != 0)
      cout << "NO"
           << "\n";
    else
    {
      cout << "YES\n";
      int c = 0;
      for (int i = 0; i < n / 2; i++)
      {
        c += 2;
        cout << c << " ";
      }
      int t = c;
      c = -1;
      for (int i = 0; i < n / 2 - 1; i++)
      {
        c += 2;
        cout << c << " ";
      }
      cout << t + (n / 2) - 1 << "\n";
    }
  }
}