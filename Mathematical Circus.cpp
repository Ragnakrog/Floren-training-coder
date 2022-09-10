#include<bits/stdc++.h>
 
#define str string
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"

using namespace std;

void solve(){
   ll n,k,b;
    cin>>n>>k;
    ll c[n+1],d[n+1];
     ll res=0;
    for(int a=1;a<=n-1;a+=2){
        b=a+1;
        if(b*(a+k)%4!=0 && a*(b+k)%4!=0)
            {
              no;
              return;
            }
        else if(b*(a+k)%4!=0){
                  res++;
                  c[res]=b;
                  d[res]=a;
                }
        else {
          res++;
          c[res]=a;
          d[res]=b;
        }
    }
    yes;
    for(int i=1;i<=res;i++)
        cout<<c[i]<<" "<<d[i]<<endl;
}
int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  int t;
  cin>>t;
  while(t--){
   solve();
  }
}