#include <bits/stdc++.h>

#define ll long long
#define str string 
#define en cout << '\n';
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define MAXN 3000

using namespace std;

const int maxn = 1e5 + 10;

long double dp[MAXN+1][MAXN+1];
int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  //int test;
  //cin>>test;
  //while(test--){
  ll n;
  cin>>n;
  long double arr[n+1];
  for(int i=1;i<=n;i++)
      cin>>arr[i];
  ll res=n/2+1;
  for(int i=0;i<=n;i++)
    dp[i][0]=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=res;j++)
      dp[i][j]=dp[i-1][j-1]*arr[i]+dp[i-1][j]*(1-arr[i]);
  }
  cout<<fixed<<setprecision(10)<<dp[n][res]<<endl;
  //}
}
