/// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
using ld = long double;
using ll = long long;
 
#define endl '\n'
#define F first
#define S second
#define pb push_back
#define br cout<<endl; 
#define inf 0x3f3f3f3f
#define infll 0x3f3f3f3f3f3f3f3fLL
#define lcm(a, b) a/__gcd(a,b)*b
#define digit(n) floor(log10(n))+1
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define case(x,val) cout<< "Case "<<x<< ": " << val;
#define ver(expression) cout << (expression ? "YES\n" : "NO\n")
#define fast {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define print_mp(x) {for(auto i :x)cout<<'['<<i.F<<','<<i.S<<']'<<endl;}
#define prec(precision,value) cout<<fixed<<setprecision(precision)<<value<<endl
#define print_arr(x,n) {op for(int i = 0 ; i < n ;i++)cout << x[i] <<(i<n-1?',':']');}
 
long long pow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
        res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
/*
template <class... Args>auto &see(const Args &... args)
{return ((cerr << " " << args),...) << '\n';}
#define bug(...) cerr << "[ " #__VA_ARGS__ " ] = "; see(__VA_ARGS__) << '\n';
*/

bool isPowerOfTwo (int x)
{
    return x && (!(x&(x-1)));
}
 

vector<int> adj[2005],vis(2005,0),leb(2005,1);

int mx = 1 ;

void dfs(int sorce){

    if(vis[sorce])return ;

    for(int x : adj[sorce]){

        if(!vis[x])
        {
            leb[x] = leb[sorce]+1 ;
            mx = max(leb[x],mx);
            dfs(x) ;
        }
    }
    return;
}


int n , t , x;


int main()
{

   fast

   cin >> n ; 

   vector<int>v(n);

   for(int i = 1 ; i <= n ; i++)
   {
       cin >> x ; 

       if(x == -1) continue ;

       adj[x].pb(i);
   }

   int res = 1 ;

   for(int i = 1 ; i <= n ; i++)
   {
       if(vis[i])continue ;
       dfs(i);
       res = max(res ,mx) ;  
   }

   cout << res << endl ;
   
}
