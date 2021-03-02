/// 1-n porjonto sobgulo number er co-prime er songkha ber kore
///reference shanto vaier boi
#include<bits/stdc++.h>

using namespace std;

int phi[5000005];
int mark[5000005];
int n=5000000;
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
}

int main()
{
    seivePhi();
    int i,t;
    cin>>t;
    while(t--)
    {
        cin>>i;///enter number for whom you want to know num of co-prime;
        cout<<phi[i]<<endl;
    }
    return 0;
}
