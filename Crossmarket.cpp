#include <bits/stdc++.h>
#define ll long long
#define str string 
#define en cout << '\n';
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

const int maxn = 1e5 + 10;

int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int test;
  cin>>test;
  while(test--){
  ll n,m;
  cin>>n>>m;
  if(n==1 && m==1)
      cout<<0<<endl;
  else if(n==1 || m==1) cout<<max(n,m)<<endl;
  else cout<<n+m+min(n,m)-2<<endl;
  }
}
