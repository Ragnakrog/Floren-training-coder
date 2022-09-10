#include <bits/stdc++.h>

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
#define vpd vector<pd>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

//pairs
#define mp make_pair
#define fi first
#define se second

//vectors
#define pb push_back
#define pf push_front

//loops
#define FOR(i, a, b) for(int i=(int)a;i<(int)b;++i)
#define ROF(i, a, b) for(int i=(int)a-1;i>=(int)b;i--)
#define rep(a, x) for(auto& a : x)

const int MOD = 1e9+7;
const ll INF = 1e18;

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n,k;
    cin>>n>>k;
    ll a[n+1],b[n+1];
    ll dp[n+1][k+1]={0};
    FOR(i,0,n+1) dp[i][0] = 0;
    FOR(i,0,k+1) dp[0][i] =0;
    FOR(i,1,n+1) cin>>a[i]>>b[i];
    FOR(i,1,n+1)
        {
            FOR(j,1,k+1)
                {
                    if (a[i]>j) dp[i][j] = dp[i-1][j];
                    if (a[i]<=j) dp[i][j] = max(dp[i][j-a[i]]+b[i],dp[i-1][j]);
                }
        }
       cout<<dp[n][k]<<endl; 
      //ll c[1001],d = 0;  
     //while(n > 0) {
        //if(f[n][k] != f[n-1][k]) {
          //  d++;
          // c[d] = n;
           // k -= a[n];
        //}
        //else n--;
     //}
     //ROF(i,d+1,1) cout<<c[i]<<" ";
}