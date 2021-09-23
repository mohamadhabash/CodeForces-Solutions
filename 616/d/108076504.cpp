#include <bits/stdc++.h> 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define ln "\n"
// #define int long long
typedef long long ll;
typedef long double ld;
ll MOD = 1e9+7;
const int N=5e6+5; 
using namespace std;
int a[N];
int freq[N];
void solve() {
    int n, k;
    // cin>>n>>k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++) scanf("%d", &a[i]);

    int l=0, r=0, ansl=0,ansr=0, dif=0, cnt=0;
    while(r<n) {
        if(freq[a[r]]==0) 
            cnt++;
        freq[a[r]]++;
        while(cnt > k) {
            freq[a[l]]--;
            if(!freq[a[l]]) {
                cnt--;
            }
            l++;
        }
        if(r-l>dif) {
            ansl=l, ansr=r;
            dif = r - l;
        }
        r++;
    }
    // cout<<ansl+1<<" "<<ansr+1;
    printf("%d %d", ansl+1, ansr+1);

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