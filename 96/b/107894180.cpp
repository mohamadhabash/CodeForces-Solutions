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

int n, ans=1e12;
void answer(int a, int c) {
    if(a>=n && c==0) {
        ans = min(ans, a);
    }
    if(a>1e12) return;
    answer(a*10+4,c+1);
    answer(a*10+7,c-1);
}

void solve() {
    cin>>n;
    answer(0,0);
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