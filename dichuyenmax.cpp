#include<bits/stdc++.h>
#include <math.h>
#include <stack>

/*** Input Output ***/
#define vi vector<int>
#define vl vector<ll>
#define vdb vector<db>
#define vb vector<bool>
#define vs vector<str>
#define vpii vector<pii>
#define vpll vector<pll>
#define vpd vector<pd>

#define ll long long
#define str string
#define db double

/*** Define Values ***/
//#define mx 200005
#define mod 1000000007
#define PI acos(-1.0)
#define eps 1e-7
#define size1 15

#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define mem(name, value) memset(name, value, sizeof(name))

/*** Sorts ***/
#define all(v) (v).begin(), (v).end()
#define rev(v) reverse(all(v))
#define srt(v) sort(all(v))
#define srtGreat(v) sort(all(v), greater<ll>())

/*** Some Prints ***/
#define en cout << '\n';
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define case cout << "Case " << t++ << ": "
#define whi while (ii<=n)

//loops
#define FOR(i, a, b) for(int i=(int)a;i<=(int)b;++i)
#define ROF(i, a, b) for(int i=(int)a;i>=(int)b;i--)
#define rep(a, x) for(auto& a : x)

const int MOD = 1e9+7;
const ll INF = 1e18;

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,m,max1=-1000000001,a[102][102],f[102][102];
    cin>>n>>m;
    FOR(i,1,n)
    FOR(j,1,m) cin>>a[i][j];
    FOR(i,1,n) {
      a[i][0]=a[i][1];
      a[i][m+1]=a[i][m];
    }
    FOR(i,0,m+1) f[n][i]=a[n][i];
    ROF(i,n-1,1)
    FOR(j,1,m) f[i][j]=a[i][j]+max(f[i+1][j],max(f[i+1][j+1],f[i+1][j-1]));
    FOR(j,1,m)
      if (f[1][j]>max1) max1=f[1][j];
    if (m==1){
      max1=0;
      FOR(i,1,n) max1+=a[i][1];
    }
    cout<<max1;
}
