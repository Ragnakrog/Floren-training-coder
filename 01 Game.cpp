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
#define p0(a) cout << a << " "
#define p1(a) cout << a << endl
#define p2(a,b) cout << a << " " << b << endl
#define p3(a,b,c) cout << a << " " << b << " " << c << endl
#define p4(a,b,c,d) cout << a << " " << b << " " << c << " " << d << endl
 
//loops
#define foR0(n1) for(ll i = 0; i < n1; i++)
#define foR1(n1) for(ll i = 1; i <= n1; i++)
#define foRev(n1) for(ll i = n1 - 1; i >= 0; i--)
#define forIn(arr, n1) for(ll i = 0; i < n1; i++) sc1(arr[i]);
#define forIn1(arr, n1) for(ll i                                                                                                                                                                   = 1; i <= num; i++) sc1(arr[i]);
#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr, n1) for(ll i = 0; i < n; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');
#define FOR(i, a, b) for(int i=(int)a;i<=(int)b;++i)
#define ROF(i, a, b) for(int i=(int)a;i>=(int)b;i--)
#define Fo(i, a, b, c) for(int i = a; i <= b; i += c)
#define rep(a, x) for(auto& a : x)
#define MAXN 3000
using namespace std;
 
const int MOD = 1e9+7;
const ll INF = 1e18;
const int maxn = 1e5 + 10;

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin); 
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t;
  cin>>t;
  while(t--){
  	str s ;
  	cin>>s;
  	FOR(i,1,s.size()){
  	char s1='1',s2='0';
  	if((min(s1,s2))%2==0)
  		cout<<"DA"<<endl;
  	else cout<<"NET"<<end;
  }
  	}
 }