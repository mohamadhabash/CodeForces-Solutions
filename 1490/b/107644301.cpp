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

int b[3], x, n;
void solve() {
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>x;
        b[x%3]++;
    }

    int ans=0;
    while(b[0]!=b[1] || b[1]!=b[2]) {
        for(int i=0;i<3;i++) {
            if(b[i]>b[(i+1)%3]) {
                b[i]--;
                b[(i+1)%3]++;
                ans++;
            }
        }
        if(b[0]==b[1] && b[1]==b[2]) break;
    }
    cout<<ans<<ln;
    
}
 
int main() {
    fast_cin();
    int t=1;
    cin>>t;
    while(t--) {
       solve();
    }
   return 0;
}