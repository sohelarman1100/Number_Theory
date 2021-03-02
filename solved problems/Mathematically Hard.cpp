#include<bits/stdc++.h>

using namespace std;

unsigned long long int phi[5000005];
int mark[5000005];
void seivePrime()
{
    phi[1]=0;
    for(int i=2; i<=5000004; i++)
        phi[i]=i;
    int i,j;
    //memset(mark, 0,sizeof(mark));
    mark[1]=1;
    for(i=2; i<=5000004; i++)
    {
        if(!mark[i])
        {
            for(j=i; j<=5000004; j+=i)
            {
                mark[j]=1;
                phi[j]=phi[j]-(phi[j]/i);
            }
        }
    }
    for(int i=2; i<=5000004; i++)
        phi[i]=(phi[i]*phi[i])+phi[i-1];///cumulative sum

}

int main()
{
    seivePrime();
    int i,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        unsigned long long int m,p,q,r,s,l;
        scanf("%llu%llu",&l,&r);
        printf("Case %d: %llu\n",i,phi[r]-phi[l-1]);
    }
    return 0;
}
