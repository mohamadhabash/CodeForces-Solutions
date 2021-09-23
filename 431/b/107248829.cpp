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

void solve() {
    int a[10][10]={0};
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cin>>a[i][j];
        }
    }
    int p[10]={0,1,2,3,4,5,6,7,8,9};
    int ans=0;
    do {
        int tmp=0;
        for(int i=0;i<4;i++) {
            tmp+=(a[p[i]][p[i+1]])+(a[p[i+1]][p[i]])+(a[p[i+2]][p[i+3]])+(a[p[i+3]][p[i+2]]);
        }
        ans = max(tmp,ans);
    } while(next_permutation(p,p+5));
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