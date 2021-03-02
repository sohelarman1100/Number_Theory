#include<bits/stdc++.h>
using namespace std;

int N=1000002;
int divisors[1000005];

void div()
{
    int i,j;
    for(i=1; i<=N; i++)
        for(j=i; j<=N; j+=i)
            divisors[j]++;

}
int GCD(int a, int b)
{
    if(b==0) return a;
    return GCD(b, a%b);
}

int main()
{
    div();
    int q;
    //cin>>q;
    scanf("%d",&q);
    while(q--)
    {
        int i,j,k,l,m,n;
        //cin>>m>>n;
        scanf("%d%d",&m,&n);
        k=GCD(m,n);
        //cout<<divisors[k]<<endl;
        printf("%d\n",divisors[k]);
    }
    return 0;
}
