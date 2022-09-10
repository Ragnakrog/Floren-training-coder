
#include <bits/stdc++.h>
#include <math.h>
#include <stack>

#define ll long long
#define str string
#define db double
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

//pairs
#define fi first
#define se second
#define mem(name, value) memset(name, value, sizeof(name))

/*** Some Prints ***/
#define en cout << '\n';
#define no cout << "NO\n"
#define yes cout << "YES\n"

//loops
#define FOR(i, a, b) for(int i=(int)a;i<=(int)b;++i)
#define ROF(i, a, b) for(int i=(int)a;i>=(int)b;i--)
#define rep(a, x) for(auto& a : x)
#define MAXN 3000
using namespace std;

const int mod = 1e9+7;
const ll INF = 1e18+7;
const int maxn = 1e6 + 10;
int n,k,a[maxn];
bool check(int m){
     ll s=0;
     for(int i=1;i<=n;i++)
        s+=a[i]/m;
     return (s>=k);
}
int main()
{ 
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  //int test;
  //cin>>test;
  //while(test--){
  cin>>n>>k;
  for(int i=1;i<=n;i++)
      cin>>a[i];
  int l=0,r=1e9;
  while(r-l>1){
    int mid=(l+r)/2;
    if(check(mid))
      l=mid;
    else r=mid;
  }
  cout<<l;
  //cout << endl << "Time elapsed: " << 1000*clock() / CLOCKS_PER_SEC << "ms" << endl;
  //}
}

