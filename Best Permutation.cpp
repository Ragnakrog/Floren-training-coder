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
  ll n;
  cin>>n;
  ll arr[n+1];
  for(int i=1;i<=n;i++)
      arr[i]=i;
  if(n%2==0)
  for(int i=1;i<=n-3;i++)
  {
    swap(arr[i],arr[i+1]);
    i++;
  }
  else {
    for(int i=2;i<=n-3;i++)
    {
      swap(arr[i],arr[i+1]);
      i++;
    }
  }
  for(int i=1;i<=n;i++)
     cout<<arr[i]<<" ";
  en;
  }
}
 