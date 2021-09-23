#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 1e9+7;
double eps = 1e-12;
#define ln "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define int long long
const int N=1e5+5; 

void solve() {
    int n, d;
    cin>>n>>d;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(), a.end());
    int l=0, r=0, ans=0, dif=0, tmp=0;
    while(r<n) {
        dif=a[r].first-a[l].first;
        tmp+=a[r].second;
        while(dif>=d) {
            tmp-=a[l].second;
            l++;
            dif = a[r].first - a[l].first;
        }
        ans = max(ans, tmp);
        r++;
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