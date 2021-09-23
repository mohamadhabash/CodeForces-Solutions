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
#define ln "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
const int N=1e5+5; 

ll cum[N+5],a[N+5],scum[N+5];
void solve() {
    ll n, m, type, l, r;
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        cum[i]=cum[i-1]+a[i];
    }
    sort(a,a+n+1);
    for(int i=1;i<=n;i++) {
        scum[i]=scum[i-1]+a[i];
    }
    cin>>m;
    // for(int i=1;i<=n;i++) cout<<scum[i]<<" ";
    while(m--) {
        cin>>type>>l>>r;
        if(type==1) {
            cout<<cum[r]-cum[l-1]<<ln;
        }
        else {
            cout<<scum[r]-scum[l-1]<<ln;
        }
    }
}
 
int main() {
    fast_cin();
    int t=1;
    // cin>>t;
    while(t--) {
       solve();
    }
   return 0;
}