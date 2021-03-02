/// 1-n porjonto sobgulo number er co-prime er songkha ber kore
///reference shanto vaier boi
#include<bits/stdc++.h>

using namespace std;

long long phi[1000005];
long long res[1000005];
long long mark[1000005];
long long n=1000000;
void seivePhi()
{
    int i,j;
    for(i=1; i<=n; i++)///initialization;
        phi[i]=i;
    //phi[1]=1;
    mark[1]=1;
    for(i=2; i<=n; i++)
    {
        if(!mark[i])
        {
            for(j=i; j<=n; j+=i)
            {
                mark[j]=1;
                phi[j]=phi[j]-(phi[j]/i);
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j+=i)
        {
            res[j]+=(i*phi[i]);
        }
    }
}

int main()
{
    seivePhi();
    int i,t;
    scanf("%d",&t);
    while(t--)
    {
        long long ans,k;
        scanf("%lld",&k);
        ans=(res[k]+1);
        ans*=k;
        ans/=2;
        printf("%lld\n",ans);
    }
    return 0;
}
