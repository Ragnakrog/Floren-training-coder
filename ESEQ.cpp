
#include <bits/stdc++.h>
using namespace std;
#define no cout<<'NO'<<endl;
#define yes cout<<'YES'<<endl;
#define ll long long
#define str string
#define en cout<<endl;
#define db double
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n;cin>>n;
    ll a[n+1],b[n+1],c[n+1],vt[n+1];
    for (int i=1;i<=n;i++) cin>>a[i];//nhap du lieu 
    b[0]=0;c[n+1]=0;
    for (int i=1;i<=n;i++) b[i]=b[i-1]+a[i];
    sort(b+1,b+1+n);
    for (int i=n;i>0;i--) c[i]=c[i+1]+a[i];
    sort(c+1,c+1+n);
    for (int i=n;i>0;i--) vt[i]=i;
    ll dem=0;
    for (ll i=1;i<=n;i++) 
        if (binary_search(c+1,c+n+1,b[i])!=0) 
            {
                ll tmp=binary_search(c+1,c+n+1,b[i]);
                for (ll j=tmp;j<=n;j++)
                    if (vt[j]>i&&c[j]==b[i]) dem++;
                    else if (c[j]!=b[i]) break;
                for (ll j=tmp-1;j>0;j--)
                    if (vt[j]>i&&c[j]==b[i]) dem++;
                    else if (c[j]!=b[i]) break;
            }
    cout<<dem+2;
}