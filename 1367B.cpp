/// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define digit(n) floor(log10(n)) +1
#define endl '\n' 

 
void solve()
{
    int n , mn(0) ,i; 

    scanf("%d",&n);

    int a[n] ;

    for ( i = 0; i < n; ++i)
    {
        scanf("%d",a+i) ;
    }

    for ( i = 0; i < n; ++i)
    {
       if(i%2 != a[i]%2)
          for (int j = i+1; j < n; ++j)
          {
              if(j%2 != a[j]%2 && i%2 != j%2)
              {
                  swap(a[i],a[j]) ; 
                  mn++;
                  break ;
              }

          }
    }

    for ( i = 0; i < n; ++i)
    {
        if(i%2 != a[i]%2)
        {
            printf("-1\n");
            break ;
        }
    }

    if(i==n)printf("%d\n", mn);
}       


int main()
{
 int  t = 1 ;

 scanf("%d",&t);

 while(t--) solve() ;
}
