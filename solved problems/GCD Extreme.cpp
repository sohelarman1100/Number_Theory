/// 1-n porjonto sobgulo number er co-prime er songkha ber kore
///reference shanto vaier boi
#include<bits/stdc++.h>

using namespace std;

int phi[1000005];
long long res[1000005];
int mark[1000005];
int n=1000000;
void seivePhi()
{
    int i,j;
    for(int i=2; i<=n; i++)///initialization;
        phi[i]=i;
    phi[1]=1;
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
        for(j=i+i; j<=n; j+=i)
        {
            res[j]+=phi[(j/i)]*i;
        }
    }
    for(i=2; i<=n; i++)
        res[i]+=res[i-1];
}

int main()
{
    seivePhi();
    int i,t,k;
    //scanf("%d",&t);
    while(scanf("%d",&k)!=EOF)
    {
        if(k==0)
            break;
        long long ans;
        //scanf("%lld",&k);
        ans=res[k];
        printf("%lld\n",ans);
    }
    return 0;
}
