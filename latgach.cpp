
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
ll n;
string dp[102];
string add(str a,str b){
  int x=a.size()-b.size();
  x=abs(x);
  str c="";
  for(int i=0;i<x;i++) c+="0";
  if(a.size()<b.size())
    a=c+a;
  else b=c+b;
  int n=a.size();
  str s="";
  int r=0;
  for(int i=n-1;i>=0;i--)
  {
    int res=a[i]+b[i]-'0'-'0'+r;
    if(res>9) r=1,res-=10;
    else r=0;
    s+=(char)(res+'0');
  }
  if(r)
    s+="1";
  reverse(s.begin(),s.end());
  return s;
}
int main()
{ 
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  dp[1]="1";
  dp[2]="2";
  for(int i=3;i<=100;i++)
     dp[i]=add(dp[i-1],dp[i-2]);
  int test;
  cin>>test;
  while(test--){
   cin>>n;
   cout<<dp[n];
   cout<<endl;
  }
}

