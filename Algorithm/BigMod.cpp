///jodi x to the power n er value ke mod kora lage tahole bigmod use kora hoy....ar nomally power 1 hole
/// direct m diye mod kore dilei hoy;

#include<bits/stdc++.h>
using namespace std;

int bigmod(int x,int n,int M)///x=given number...n=power of x
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return bigmod((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*bigmod((x*x)%M,(n-1)/2,M))%M;

}

int main()
{
    int i,j,k,l,m,n,p;
    cin>>n>>p>>m;
    int ans=bigmod(n,p,m);
    cout<<ans<<endl;
}
