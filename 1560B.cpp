/// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
using ld = long double;
using ll = long long;

#define endl '\n'
#define F first
#define S second
#define pb push_back()
#define br cout<<endl; 
#define inf 0x3f3f3f3f
#define op cout <<"[";
#define cl cout << "]\n";
#define infll 0x3f3f3f3f3f3f3f3fLL
#define lcm(a, b) a /__gcd(a, b) * b
#define digit(n) floor(log10(n)) + 1
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define case(x) cout << "Case " << x << ": ";
#define bug(a) cout << #a " = " << (a) << ' ';
#define bugc(x) {op for(auto i :x)cout << x << ','; cl}
#define ver(expression) cout << (expression ? "Yes\n" : "No\n")
#define fast {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define prec(precision, value) cout<<fixed<<setprecision(precision)<<value<<endl



void solve()
{
    int a , b, c ,temp; 

    cin >> a >> b >> c ;
    
    if (b < a) swap(a, b);

    int d = b - a - 1, lim = b + d - a + 1, l = d, r = a - 1;

    if (l < r || c > lim) cout<< "-1\n";

    else if(a < c && c < b)
    {
        if(b+c-a>lim)cout << (b + (c-a)) % lim << endl; 

        else cout << b + c - a << endl ;
    }
    else 
    {
        if(c < lim && c < a)temp = lim + c ;

        else temp = c ;

        cout<< temp - b + a << endl;
    }

}

int main()
{

    fast 
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        solve();
    }
}
