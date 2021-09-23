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

string s;
int n;
bool ans = false;
void lucky(int k) {
    if(to_string(k).size() > s.size()) {
        return;
    }
    if(k!=0 && n%k==0) { 
        ans=true;
        return;
    }
    lucky(k*10+4);
    lucky(k*10+7);
}

void solve() {
    cin>>s;
    int b = stoi(s);
    n = b;
    bool f = true;
    for(int i=0;i<s.size();i++) {
        if(s[i]!='7' && s[i]!='4') {
            f = false;
        }
    }
    if(f) {
        cout<<"YES";
        return;
    }
    lucky(0);
    cout<<(ans?"YES":"NO");
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