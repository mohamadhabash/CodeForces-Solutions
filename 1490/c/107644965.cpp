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
#define int long long

const int N=1e4+5; 

bool perfectCube(int x) {
    int tmp = cbrt(x);
    while(tmp * tmp * tmp > x) tmp--;
    while(tmp * tmp * tmp < x) tmp++;
    if(tmp * tmp * tmp == x) return true;
    return false;

}

int n;
void solve() {
    cin>>n;
    for(int i=1;i<N;i++) {
        int cba = i*i*i;
        int cbb = n - cba;
        if(cbb<=0) {
            break;
        }
        if(perfectCube(cbb)) {
            cout<<"YES"<<ln;
            return;
        }
    }
    cout<<"NO"<<ln;
}
 
signed main() {
    fast_cin();
    int t=1;
    cin>>t;
    while(t--) {
       solve();
    }
   return 0;
} 