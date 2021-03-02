/// 1-n porjonto sobgulo number er co-prime er songkha ber kore
///reference shanto vaier boi
#include<bits/stdc++.h>

using namespace std;

int phi[100005],res[100005];
int mark[100005];
int n=100000;
void seivePhi()
{
    int i,j;
    for(i=2; i<=n; i++)
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
        res[i]=i-phi[i];
    for(i=2; i<=n; i++)
        res[i]+=res[i-1];
}

int main()
{
    seivePhi();
    int i,t,p=0;
    cin>>t;
    while(t--)
    {
        p++;
        cin>>i;
        cout<<"Case "<<p<<": "<<res[i]<<endl;
    }
    return 0;
}
