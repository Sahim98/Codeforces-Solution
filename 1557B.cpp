/// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

using ld = long double;
using ll = long long;
#define fast ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define digit(n) floor(log10(n)) +1
#define endl '\n' 
        
    

void solve()
{
    int n , k ; 

    scanf("%d %d", &n , &k ) ; 

    vector<int> v(n) ,w(n);  


    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&v[i]) ; 

        w[i] = v[i] ; 
    }

    sort(w.begin(),w.end()) ; 


    int dup(n)  ; 

    for (int i = 1; i < n; ++i)
    {
        if(v[i] > v[i-1])
        {
            int in = upper_bound(w.begin(),w.end(),v[i-1])-w.begin(); ;

            if(w[in] == v[i]) dup-- ; 
        }
    }

    cout << (dup <= k ?"Yes\n":"No\n") ; 

}       


int main()
{
 int  t = 1 ;

 scanf("%d",&t) ;

 while(t--) solve() ;
}
