#include <bits/stdc++.h> 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define ln "\n"
#define int long long
typedef long long ll;
typedef long double ld;
ll MOD = 1e9+7;
const int N=1e5+5; 
using namespace std;

void solve() {
    int a[100], mn=1000;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mn = min(mn, a[i]);
    }
    
    int ans=0;
    for(int i=0;i<n;i++) {
        if(a[i]>mn) ans++;
    }
    cout<<ans<<ln;
}
 
signed main() {
    fast_cin();
    int t=1;
    cin>>t;
    while(t--) {
       solve();
    }
   return 0;
}