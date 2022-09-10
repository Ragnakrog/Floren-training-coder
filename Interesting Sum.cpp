#include <bits/stdc++.h>
#define ll long long
#define str string 
using namespace std;

int main(){
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
  ll a[n+1];
  for(int i=1;i<=n;i++)
     cin>>a[i];
  sort(a+1,a+1+n);
  cout<<(a[n]+a[n-1])-(a[1]+a[2])<<endl;
  }
}
