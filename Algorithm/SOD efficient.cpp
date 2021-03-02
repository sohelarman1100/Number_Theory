///reference mamun vai

#include <bits/stdc++.h>

using namespace std;

int prime[4009], x=1;

void seivePrime()
{
    char prime_b[10000];
    memset(prime_b, 0, sizeof(prime_b));
    int till = 10000;
    for(int i=4; i<=till; i+=2)
        prime_b[i] = 1;
    int limit = sqrt(till)+1;
    for(int i=3; i<=limit; i+=2)
        if(!prime_b[i])
            for(int j=i*i; j<=till; j+=(i*2))
                prime_b[j] = 1;
    prime[0] = 2;
    for(int i=3; i<=till; i+=2)
        if(!prime_b[i])
            prime[x++] = i;
}
int SOD(int n)
{
    int till = sqrt(n+1), res=1;
    for(int i=0; prime[i]<=till; i++)
    {
        if(n%prime[i]==0)
        {
            int tmpSum = 1, p = 1;
            while(n%prime[i]==0)
            {
                n/=prime[i];
                p *= prime[i]; ///37 & 38 number line sod ber korar sutro (p1^0+p1^1+p1^2...)*(p2^0+p2^1+..)
                tmpSum += p;   ///onujai kaj kore;
            }
            till = sqrt(n);
            res *= tmpSum;
            //cout<<"res= "<<res<<endl;
        }
    }
    if(n>1)
        res *= (n+1); ///jehetu sod er sutro je kono prime er jonno (p^0+p^1+p^2+..) emon vabe jay tai
        /// eikhane last shudhu n i thake je n ke vag kore tai n holo n er ekti prime divisor je kina n ke
        /// shudhu 1 bar vag kore tai divisor n er highest power 1 tai er jonno (n^0+n^1) baki sobgulo prime
        /// factor er jonno je result paowa gese tar sathe gun hobe....n^0=1;

    //cout<<"res= "<<res<<endl;
    return res;
}
int main()
{
    seivePrime();
    int ans, n;
    scanf("%d", &n);
    ans = SOD(n);
    printf("%d\n", ans);
    return 0;
}
