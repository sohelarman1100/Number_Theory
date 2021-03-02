/// 1-n porjonto sobgulo number er co-prime er songkha ber kore
///reference shanto vaier boi
#include<bits/stdc++.h>

using namespace std;

int phi[100000005];
int mark[100000005];
int res[100000005];
int n=100000000;
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
    for(i=1; i<=n; i++)
    {
        if(res[phi[i]]==0)
        {
            res[phi[i]]=i;
        }
    }
}

int main()
{
    seivePhi();
    int i,t;
    cin>>t;
    while(t--)
    {
        cin>>i;
        if(res[i]==0)
            cout<<-1<<endl;
        else
            cout<<res[i]<<endl;
    }
    return 0;
}

