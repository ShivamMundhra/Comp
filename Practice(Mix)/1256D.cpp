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
  //TEmplate for competitiveProgramming
  // #ifndef ONLINE_JUDGE
  //   freopen("in.txt", "r", stdin);
  //   freopen("out.txt", "w", stdout);
  // #endif

  fastIO;
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    ll k;
    cin >> n;
    cin >> k;
    string s;
    cin >> s;
    // int i=0,j=s.length()-1;
    int temp = 0;
    // for (char &c : s)
    // {
    //   if (c != '1')
    //     temp++;
    //   else
    //     break;
    // }
    // if(temp == n) {cout<<s<<endl;continue;}
    for (int i = 0; i < n; i++)
    {
      if (k <= 0)
        break;
      if (s[i] == '0')
      {
        if (i <= temp)
        {
          temp++;
          continue;
        }
        if (k >= i - temp)
        {
          s[temp] = '0';
          s[i] = '1';
          k = k - (i - temp);
          temp++;
        }
        else if (i - temp > k)
        {
          s[i] = '1';
          s[i - k] = '0';
          k = 0;
        }
      }
      // for(int i=0;i<s.length();i++){
      //   if(s[i]=='0' && i>temp){s[i]='1';s[temp]=0;temp=}
      // }
    }
    cout << s << endl;
  }
}