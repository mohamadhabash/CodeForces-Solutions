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

int f(int x,int p1, int p2, int p3, int p4) {
    return (((x%p1)%p2)%p3)%p4;
}

void solve() {
    int a, b, ans=0;
    int arr[4], mn=1001;
    for(int i=0;i<4;i++) {
        cin>>arr[i];
        mn = min(mn,arr[i]);
    }
    cin>>a>>b;
    // if(a-mn<0 && b-mn<0 && a!=0 && b!=0) {
    //     cout<<b-a+1;
    //     return;
    // }
    // cout<<(mn-a>0?mn-a:0);
    sort(arr, arr+4);
    for(int x=a;x<=b;x++) {
        sort(arr, arr+4);
        int cnt=0;
        do {
            if(f(x,arr[0],arr[1],arr[2],arr[3])==x) cnt++;
            if(cnt==7) {
                ans++;
                break;
            }
        } while(next_permutation(arr,arr+4));
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