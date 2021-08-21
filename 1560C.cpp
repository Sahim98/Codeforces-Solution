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
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define case(x) cout<< "Case "<<x<< ": ";
#define bug(a) cout<< #a " = "<<(a)<< ' ';
#define print_vec(x) {op for(auto i :x)cout <<x<<',';cl}
#define ver(expression) cout << (expression ? "Yes\n" : "No\n")
#define fast {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define print_map(x) {op for(auto i :x)cout<<'['<<x.F<<','<<x.S<<']'<<el;cl}
#define prec(precision,value) cout<<fixed<<setprecision(precision)<<value<<endl



void solve()
{
    int k ; 
    cin >> k ;

    int inc(1) , i(1) , col(1) ,row(1);

    string r1,c1 ;

    while(inc<=k)
    {
        if(inc+i>k)break;
        inc+=i ; i+=2 ; col++;
    }
    c1 =to_string(col) ;

    if(inc == k) cout << '1' << ' ' << col << endl ;

    else
    {
        for (size_t j = 1; j < col && inc != k; j++)inc++,row++ ;

        if(inc != k)while(inc !=k && col > 1)inc++ ,col--;

        r1=to_string(row),c1=to_string(col);
        
        cout << r1 << ' ' << c1 << endl ;  
    }
}

int main()
{
    fast 
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        //case(i) ;
        solve();
    }
}
