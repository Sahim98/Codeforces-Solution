/// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define digit(n) floor(log10(n)) +1
#define endl '\n' 


void solve()
{
    int n ; 
    scanf("%d",&n) ; 
    std::vector<int> v(n);

    double s = 0 ;

    for(int i = 0 ; i < n ; i++){

        scanf("%d",&v[i]) ; 
        s += (double)v[i];
    }
    sort(v.begin(),v.end()) ;
    double avg = 0 , temp = 0.0;

    if(s<0) avg = s-1 ;

    else avg = -s;

    for (int i = 1; i <= n; ++i)
    {
        temp+=v[i-1];
        double p = temp/i , q = (s-temp)/(n-i) ;
        avg = max(avg,p+q);
    }

    printf("%.8lf\n",avg );

}

  int main()
  {
   int  t = 1 ;

   scanf("%d",&t) ;

   while(t--)solve() ;

}
