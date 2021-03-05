/// 1-n porjonto sobgulo number er co-prime er songkha ber kore
///reference shanto vaier boi
#include<bits/stdc++.h>

using namespace std;

int phi[10005];
int mark[10005];
int n=10000;
void seivePhi()
{
    int i,j;
    for(i=2; i<=n; i++)///initialization;
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
    for(i=2; i<=n; i++)
        phi[i]+=phi[i-1];
}

int main()
{
    seivePhi();
    int i,t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long ans=phi[n];
        //cout<<ans<<endl;
        ans*=ans;
        printf("%lld\n",ans);
    }
    return 0;
}

