
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
const int maxn = 1e5 + 10;

int n,m,a[2][22][maxn],dp[1003][(1<<15)+5];
void sub2(){
  dp[0][0]=1;
  for(int i=0;i<n;i++)
  {
    for(int mask=0;mask < (1<<m);mask++)
    {
      if(dp[i][mask])
      {
        int pre_mask=0;
        FOR(j,1,m) if(a[0][j][i+1]) pre_mask+=(1 << j - 1);
        (dp[i+1][pre_mask | mask]+=dp[i][mask]) %=mod;
        pre_mask=0;
        FOR(j,1,m) if(a[1][j][i+1]) pre_mask+=(1 << j - 1);
        (dp[i+1][pre_mask | mask]+=dp[i][mask]) %=mod;
      }
    }
  }
  cout<<dp[n][(1 << m) - 1];
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
  cin>>n>>m;
  for(int i=1;i<=m;i++)
  {
    int k;
    cin>>k;
    for(int j=1;j<=k;j++){
      int x;
      cin>>x;
      if(x<0) a[0][i][-x]=1;
      else a[1][i][x]=1;
    }
  }
  if(n<=1000) sub2();
  //}
}

