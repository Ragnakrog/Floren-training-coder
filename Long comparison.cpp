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
  ll x1,p1;
  cin>>x1>>p1;
  ll x2,p2;
  cin>>x2>>p2;
  ll mn=min(p1,p2);
  p1-=mn;
  p2-=mn;
  if(p1>=7)
      cout<<">"<<endl;
  else if(p2>=7)
          cout<<"<"<<endl;
  else {
    for(int i=0;i<p1;i++) x1*=10;
    for(int i=0;i<p2;i++) x2*=10;
    if(x1<x2)
        cout<<"<"<<endl;
    if(x1>x2)
        cout<<">"<<endl;
    if(x1==x2)
        cout<<"="<<endl;
  }
  }
}
