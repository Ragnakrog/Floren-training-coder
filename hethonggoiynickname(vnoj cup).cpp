
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
const int maxn = 2e6 + 10;

int n;
pair<string,int> a[maxn];
int res[maxn];
map<string,int> mp;
void modify(pair<string,int> &p){
     res[p.second]=1e6;
     str &s=p.first;
     for(int i=0;i<s.size();i++)
     {
      if(s[i]!=s[i-1]){
        str tmp;
        for(int j=0;j<i+1;j++) tmp+=s[j];
        tmp+=s[i];
        for(int j=i+1;j<s.size();j++) tmp+=s[j];
        if(mp[tmp]==0)
        {
          res[p.second]=1;
          break;
        }
        else res[p.second]=min(res[p.second],mp[tmp]+1);
      }
     }
     mp[s]=res[p.second];
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
  cin>>n;
  for(int i=1;i<=n;i++)
      {
        cin>>a[i].first,a[i].second=i;
      }
  sort(a+1,a+n+1,[](pair<string,int> a,pair<string,int> b){
       return a.first.size()>b.first.size();
  });
  for(int i=1;i<=n;i++)
    modify(a[i]);
  for(int i=1;i<=n;i++)
    cout<<res[i]<<endl;
  //}
}

