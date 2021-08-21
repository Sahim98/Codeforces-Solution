/// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

using ld = long double;
using ll = long long;
#define fast ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0); 



void solve()

{
    int A , B ; 

    scanf("%d %d", &A , &B ) ; 

    ll good = 1LL*A*B ;

    if(B<2)printf("No\n");

    else
    {
        if(B == 2)good <<= 1LL ;

        printf("Yes\n");

        printf("%d %lld %lld\n",A,good-A,good);
    }
}       


int main()
{
 int  t = 1 ;

 scanf("%d",&t) ;

 while(t--) solve() ;


}
