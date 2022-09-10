#include <bits/stdc++.h>
#define ll long long
#define str string 
#define en cout << '\n';
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

const int maxn = 1e5 + 10;

void solve(){
 ll a,b,c,d;
 cin>>a>>b>>c>>d;
 if(min(a,b)>max(c,d) || max(a,b)<min(c,d))
      {
        no;
        return;
      }
  yes;
}
int main(){
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
