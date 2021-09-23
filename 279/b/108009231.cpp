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

int a[N];
void solve() {
    int n, t;
    cin>>n>>t;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    // if sum is more than t, we increment L
    // if sum is less than or equal to t, we increment R
    int L=0, R=0;
    int ans=0, sum=0, tmp=0;
    while(R<n) {
        if(sum+a[R]<=t) tmp++, sum+=a[R], R++, ans=max(ans,tmp);
        else sum-=a[L], L++, tmp--;
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