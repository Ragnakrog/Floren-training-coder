
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
  int t;
  cin>>t;
  while(t--){
   int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int s = accumulate(a.begin(), a.end(), 0);
    if (s == 0) {
      cout << "NO" << '\n';
      continue;
    }
    cout << "YES" << '\n';
    sort(a.begin(), a.end());
    bool ok = true;
    int pref = 0;
    for (int i = 0; i < n; i++) {
      pref += a[i];
      if (pref == 0) {
        ok = false;
        break;
      }
    }
    if (!ok) {
      reverse(a.begin(), a.end());
    }
    for (int i = 0; i < n; i++) {
      if (i > 0) {
        cout << " ";
      }
      cout << a[i];
    }
    cout << '\n';
  }
}