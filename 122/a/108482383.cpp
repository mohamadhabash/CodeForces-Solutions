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

bool ans = false;
bool is_lucky(int k) {
    string s = to_string(k);
    for(int i=0;i<s.size();i++) {
        if(s[i]!='4' && s[i]!='7') {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        if(is_lucky(i)) {
            if(n%i==0) {
                cout<<"YES";
                return;
            }
        }
    }
    cout<<"NO";
    
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