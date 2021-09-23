#include <bits/stdc++.h> 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define ln "\n"
#define int long long
typedef long long ll;
typedef long double ld;
ll MOD = 1e9+7;
const int N=2e5; 
using namespace std;

int a[N];
void solve() {
    string t, p;
    cin >> t >> p;
    for(int i=0;i<t.size();i++) {
        cin >> a[i];
    }

    int l = 1, r =  t.size(), ans = 0;

    while(l <= r) {
        int freq[N]={0};
        int mid = l + (r-l)/2;

        if(mid > t.size() - p.size()) {
            r = mid - 1;
            continue;
        }

        string tmp = "";
        for(int i = 0 ; i < mid ; i++) {
            freq[a[i]-1]++;
        }
        for(int i = 0 ; i < t.size() ; i++) {
            if(freq[i]) 
                continue;
            tmp+=t[i];
        }

        int j = 0;
        bool found = false;
        for(int i = 0 ; i < tmp.size() ; i++) {
            if(tmp[i]==p[j]) 
                j++;
            if(j == p.size()) {
                found = true;
                break; 
            }
        }
        if(found) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
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