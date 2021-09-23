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
    int n=4;
    set<pair<int,int>> points;
    set<pair<pair<int,int>,pair<int,int>>> u;
    while(n--) {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1!=x2 && y1!=y2 || x1==y1 && y1==x2 && x2==y2) {
            cout<<"NO";
            return;
        }
        if(u.count(make_pair(make_pair(x1,y1),make_pair(x2,y2)))!=0 ||
            u.count(make_pair(make_pair(x2,y2),make_pair(x1,y1)))!=0) 
        {
            cout<<"NO";
            return; 
        }
        else {
            u.insert(make_pair(make_pair(x1,y1),make_pair(x2,y2)));
        }
        points.insert(make_pair(x1,y1));
        points.insert(make_pair(x2,y2));
    }

    set<int> sX,sY;
    for(auto x: points) {
        sX.insert(x.first);
        sY.insert(x.second);
    }
    // for(auto x: points) cout<<x.first<<" "<<x.second<<ln;
    cout<<(points.size()==4 &&  sX.size()==2 && sY.size()==2?"YES":"NO");
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