#include<bits/stdc++.h>
 
#define str string
#define ll long long

using namespace std;

int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  int t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    if((n%2==0 && m%2!=0) || (n%2!=0 && m%2==0))
       cout<<"Burenka"<<endl;
    else cout<<"Tonya"<<endl;
  }
}