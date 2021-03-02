///SIEVE

#include<bits/stdc++.h>

using namespace std;
int prime[1000000];
int n,k=0;

void seivePrime()
{
    int i,j,limit=sqrt(n*1)+2;
    int mark[n+1];
    memset(mark, 0 ,sizeof(mark));
    mark[1]=1;
    prime[k++]=2;
    for(i=4; i<=n; i+=2)
        mark[i]=1;
    for(i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            prime[k++]=i;
            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=i*2)
                    mark[j]=1;
            }
        }
    }

}

int main()
{
    cin>>n;
    seivePrime();
    cout<<"number of primes: "<<k<<endl;
    for(int i=0; i<=k-1 ; i++) //k-1 porjonto chalanor karon holo last prime numberti
        cout<<prime[i]<<" ";  //prime e insert korar por k er man aro ek bere jay.
    return 0;
}
