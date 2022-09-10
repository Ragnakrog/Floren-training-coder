
#include <bits/stdc++.h>
#include <math.h>
#include <stack>

#define ll long long
#define str string
#define db double

#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdb pair<db, db>

#define vi vector<int>
#define vl vector<ll>
#define vdb vector<db>
#define vb vector<bool>
#define vs vector<str>
#define vpii vector<pii>
#define vpll vector<pll>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

//pairs
#define fi first
#define se second
#define mem(name, value) memset(name, value, sizeof(name))

//vectors
#define pb push_back
#define pf push_front
#define pof pop_front

/*** Sorts ***/
#define all(v) (v).begin(), (v).end()
#define rev(v) reverse(all(v))
#define srt(v) sort(all(v))
#define srtGreat(v) sort(all(v), greater<ll>())

/*** Some Prints ***/
#define en cout << '\n';
#define no cout << "NO\n"
#define yes cout << "YES\n"

//loops
#define FOR(i, a, b) for(int i=(int)a;i<=(int)b;++i)
#define ROF(i, a, b) for(int i=(int)a;i>=(int)b;i--)
#define TR(v,i) for(__typeof((v).begin())i=(v).begin();i!=(v).end();++i)
#define rep(a, x) for(auto& a : x)
#define MAXN 3000
using namespace std;

const int mod = 1e9+7;
const ll INF = 1e18+7;
const int maxn = 1e6 + 10;

int n,m,k,dp[maxn],sum[maxn*2];
int a[maxn];
pair<int,int> b[maxn];
ll ans=0;
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
  int cnt=1;
  for(int i=2;i<=n;i++){
    if(a[i]==a[i-1]) cnt++;
    else {
      b[++m]={a[i-1],cnt};
      cnt=1;
    }
  }
  b[++m]={a[n],cnt};
  int j=m+1;
  for(int i=1;i<=m;i++){
    while(b[i].first+b[j-1].first>=k && j>=i) j--;
    if(i>j) break;
    if(b[i].first+b[j].first==k)
        {
          if(b[i].first!=b[j].first) ans+=1ll*b[i].second*b[j].second;
          else ans+=1ll*b[i].second*(b[i].second-1)/2;
        }
  }
  cout<<ans;
  //}
}

