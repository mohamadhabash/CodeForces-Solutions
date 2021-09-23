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
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define long long int 
const int N=3e5+5; 

void solve() {
    ll n;
    cin>>n;
    vector<pair<ll,ll>> m;
    vector<ll> a, b;
    for(ll i=0;i<n;i++) {
        ll aa, bb;
        cin>>aa>>bb;
        m.push_back(make_pair(aa,bb));
        a.push_back(aa);
        b.push_back(bb);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());

    ll ans = 0;
    for(ll i=n-1;i>=0;i--) {
        ll mn = 1e10+5, mx = 0;
        if(m[i].first != a[n-1]) mx=a[n-1];
        else mx=a[n-2];
        if(m[i].second != b[n-1]) mn=b[n-1];
        else mn=b[n-2];
        ans = max(ans, mn-mx);
    }
    cout<<ans;

}
 
int main() {
   fast_cin();
   int t=1;
//    cin>>t;
    while(t--) {
       solve();
    }
   return 0;
}