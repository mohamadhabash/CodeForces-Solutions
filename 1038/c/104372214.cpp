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
const int N=1e5+5;

ll a[N], b[N];

void solve() {
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++) {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++) {
        cin>>b[i];
    }
    
    sort(a, a+n);
    sort(b, b+n);
    reverse(a, a+n);
    reverse(b, b+n);

    ll s1 = 0, s2 = 0;
    ll player = 0, i = 0, j = 0;
    ll moves = 2 * n;
    while(moves--) {
        if(!player) {
           if(a[i]>=b[j]) s1+=a[i], i++;
           else j++; 
        }
        else {
            if(b[j]>=a[i]) s2+=b[j], j++;
            else i++; 
        }
        player^=1;
    } 
    cout<<s1-s2;
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