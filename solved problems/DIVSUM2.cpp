#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int x=1;
int prime[10000];
char prime_b[500001];
//map<ll,ll>mp;
void seivePrime()
{
    //char prime_b[200000000];
    //memset(prime_b, 0, sizeof(prime_b));
    int till = 500000;
    for(int i=4; i<=till; i+=2)
        prime_b[i] = 1;
    int limit = sqrt(till)+1;
    for(int i=3; i<=limit; i+=2)
        if(!prime_b[i])
            for(int j=i*i; j<=till; j+=(i*2))
                prime_b[j] = 1;
    prime[0] = 2;
    //mp[2]=1;
    for(int i=3; i<=till; i+=2)
        if(!prime_b[i])
        {
            prime[x++] = i;
        }
}
int SOD(int n)
{
    int till = sqrt(n+1), res=1;
    for(int i=0; (i<x && prime[i]<=till) ; i++)
    {
        if(n%prime[i]==0)
        {
            int tmpSum = 1, p = 1;
            while(n%prime[i]==0)
            {
                n/=prime[i];
                p *= prime[i];
                tmpSum += p;
            }
            till = sqrt(n);
            res *= tmpSum;
            //cout<<"res= "<<res<<endl;
        }
    }
    if(n>1)
        res *= (n+1);
    //cout<<"res= "<<res<<endl;
    return res;
}

int main()
{
    int t;
    scanf("%d",&t);
    seivePrime();
    while(t--)
    {
        int i,j,k,l,m,n;
        scanf("%d",&n);
        int ans=SOD(n);
        printf("%d\n",ans-n);
    }
    return 0;
}
