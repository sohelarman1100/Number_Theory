#include<bits/stdc++.h>
using namespace std;
int SOD(long long n) ///sum of divisor sqrt(n)
{
    long long  limit = sqrt(n+1);
    long long res = 0;
    for(long long i=1; i<=limit; i++)
        if(!(n%i))
        {
            res += i;
            res += (n/i);
        }
    if(limit*limit==n)
        res -= limit;
    return res;
}

int main()
{
    long long i,j,k,l,m,n;
    cin>>n;
    long long ans=SOD(n);
    cout<<ans<<endl;
}
