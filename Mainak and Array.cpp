
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
const int maxn = 1e5 + 10;

void solve(){
  ll n;
  cin>>n;
  ll a[n+1],mx=0,mn=1e9;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    mx=max(a[i],mx);
    mn=min(a[i],mn);
  }
  ll ans=-1e9;
  for(int i=1;i<=n-1;i++)
      ans=max(ans,a[i]-a[i+1]);
  ans=max(ans,mx-a[1]);
  ans=max(ans,a[n]-mn);
  cout<<ans<<endl;
}
int main()
{ 
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int test;
  cin>>test;
  while(test--){
  solve();
  }
}

