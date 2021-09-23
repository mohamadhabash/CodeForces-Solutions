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

int a[N], b[N];
void solve() {
    int n, k;
    scanf("%lld %lld", &n, &k);
    for(int i=0;i<n;i++) {
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<n;i++) {
        scanf("%lld",&b[i]);
    }

    int ans = 0;
    int l=1, r=2e9;
    while(l<=r) {
        int tmp = k;
        int i = l + (r-l)/2;
        for(int j=0;j<n;j++) {
            if(i*a[j] > b[j]) {
                tmp -= i*a[j]-b[j];
            }
            if(tmp < 0) {
                r = i - 1;
                break;
            }
        }

        if(tmp>=0) {
            ans=i;
            l = i+1;
        }
    }
    printf("%lld", ans);
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