#include <bits/stdc++.h> 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define ln "\n"
// #define int long long
typedef long long ll;
typedef long double ld;
ll MOD = 1e9+7;
const int N=1e5+5; 
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    k--;
    if(n%2==0) {
        cout<<k%n+1<<ln;
    }
    else {
        cout<<(k/(n/2) + k%n)%n + 1<<ln;
    }
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