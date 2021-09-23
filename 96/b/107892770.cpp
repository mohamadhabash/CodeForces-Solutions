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
    queue<pair<int, int>> q;
    int n;
    cin>>n;
    q.push({0,0});
    while(true) {
        int val, cnt;
        val = q.front().first;
        cnt = q.front().second;
        q.pop();
        if(val>=n && cnt==0) {
            cout<<val;
            return;
        }
        q.push({val*10+4, cnt+1});
        q.push({val*10+7, cnt-1 });
    }
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