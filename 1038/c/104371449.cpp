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
 

void solve() {
    ll n;
    cin>>n;
    vector<ll> a, b;
    for(ll i=0;i<n;i++) {
        ll z;
        cin>>z;
        a.push_back(z);
    }
    for(ll i=0;i<n;i++) {
        ll z;
        cin>>z;
        b.push_back(z);
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll s1=0, s2=0;
    bool f = 1;
    while(!a.empty() || !b.empty()) {
        auto it1 = a.end() - 1; 
        auto it2 = b.end() - 1;
        if(a.empty()) {
            while(!b.empty()) {
                if (!f) {
                    f=1;
                    it2 = b.end() - 1;
                    s2 +=*it2;
                    b.pop_back();
                }
                else {
                    b.pop_back();
                    f=0;
                }
            }
            break;
        }
        if(b.empty()) {
            while(!a.empty()) {
                if(f) {
                    f=0;
                    it1 = a.end() - 1;
                    s1 += *it1;
                    a.pop_back();
                }
                else {
                    a.pop_back();
                    f=1;
                }
            }
            break;
        }
        if(f) {
            f=0;
            if(*it1 >= *it2) {
                s1+=*it1;
                a.pop_back();
            }
            else b.pop_back();
        }
        else {
            f=1;
            if(*it2 >= *it1) {
                s2+=*it2;
                b.pop_back();
            } 
            else a.pop_back();
        }
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