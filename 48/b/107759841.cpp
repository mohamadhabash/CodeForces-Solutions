#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#define ln "\n"
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define int long long

using namespace std;
 
typedef long long ll;
typedef long double ld;
ll MOD = 1e9+7;
double eps = 1e-12;
const int N=1e5+5; 

int arr[55][55], cum[55][55];
void solve() {
    int n, m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
           cum[i][j]=arr[i][j]+cum[i-1][j]+cum[i][j-1]-cum[i-1][j-1];
        }
    }
    int a, b;
    cin>>a>>b;
    int ans=INT32_MAX;
    for(int i=a;i<=n;i++) {
        for(int j=b;j<=m;j++) {
            ans = min(ans, cum[i][j]-cum[i-a][j]-cum[i][j-b]+cum[i-a][j-b]);
        }
    }
    swap(a, b);
    for(int i=a;i<=n;i++) {
        for(int j=b;j<=m;j++) {
            ans = min(ans, cum[i][j]-cum[i-a][j]-cum[i][j-b]+cum[i-a][j-b]);
        }
    }
    cout<<ans;
}
 
signed main() {
    fast_cin();
    int t=1;
    // cin>>t;
    while(t--) {
       solve();
    }
   return 0;
}