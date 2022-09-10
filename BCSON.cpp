/*
 
-=Buddha=- độ cho code em chạy được ko bug:)))
                                  _
                               _ooOoo_
                              o8888888o
                              88" . "88
                              (| -_- |)
                              O\  =  /O
                           ____/`---'\____
                         .'  \\|     |//  `.
                        /  \\|||  :  |||//  \
                       /  _||||| -:- |||||_  \
                       |   | \\\  -  /'| |   |
                       | \_|  `\`---'//  |_/ |
                       \  .-\__ `-. -'__/-.  /
                     ___`. .'  /--.--\  `. .'___
                  ."" '<  `.___\_<|>_/___.' _> \"".
                 | | :  `- \`. ;`. _/; .'/ /  .' ; |
                 \  \ `-.   \_\_`. _.'_/_/  -' _.' /
       ===========`-.`___`-.__\ \___  /__.-'_.'_.-'================
                          `=--=-'
 
 
          _.-/`)
         // / / )
      .=// / / / )
     //`/ / / / /
    // /     ` /
   ||         /
    \\       /
     ))    .'
    //    /
         /
*/
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
#define vpd vector<pd>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)
 
//pairs
#define mp make_pair                                                                                                                                                                                                                        
#define tu tuple
#define fi first
#define se second
#define mem(name, value) memset(name, value, sizeof(name))
 
/*** Define Values ***/
//#define mx 200005
#define mod 1000000007
#define PI acos(-1.0)
#define eps 1e-7
#define size1 15
 
//vectors
#define pb push_back
#define pf push_front
#define pof pop_front
#define lb lower_bound
#define ub upper_bound

#define sll set<ll>                                                                                                                  
#define sc set<char>
#define mll map<ll,ll>
#define vll vector<ll>                                                                                                                              
#define vc vector<char>
#define msll multiset<ll,greater<ll>>
#define msc multiset<char,greater<char>>
#define vvll vector<vector<ll>>

 
/*** Sorts ***/
#define all(v) (v).begin(), (v).end()
#define rev(v) reverse(all(v))
#define srt(v) sort(all(v))
#define srtGreat(v) sort(all(v), greater<ll>())                  
/*** Some Prints ***/
#define en cout << '\n';                                                                                                                    
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define case cout << "Case" << t++ << ": "
#define whi while (ii<=n)
 
//loops
#define foR0(n) for(ll i = 0; i < n; i++)
#define foR1(n) for(ll i = 1; i <= n; i++)
#define FOR(i, a, b) for(int i=(int)a;i<=(int)b;++i)
#define ROF(i, a, b) for(int i=(int)a;i>=(int)b;i--)
#define forn(i,n) for (int i=0; i<int(n); i++)
#define Fo(i, a, b, c) for(int i = a; i <= b; i += c)
#define rep(a, x) for(auto& a : x)
#define MAXN 3000
using namespace std;
 
const int MOD = 1e9+7;
const ll INF = 1e18+7;
const int maxn = 1e5 + 10;

int m,n,a[1002][1002];
long long s;
int h[4]={-1,0,1,0};
int c[4]={0,1,0,-1};
 
void nhap()
{
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++) 
          cin>>a[i][j];
 
    }
} 
void giai()
{
  FOR(i,1,m){
    FOR(j,1,n){
      FOR(k,0,3){
        if(a[i+h[k]][j+c[k]]<a[i][j])
            s+=a[i][j]-(a[i+h[k]][j+c[k]]);
      }
    }
  }
  s+=(n*m);
  cout<<s;
}
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin); 
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  //int t;
  //cin>>t;
  //while(t--){
  nhap();
  giai();
  //}
}