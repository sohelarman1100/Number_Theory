///reference mamun vair blog

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

int NOD(int n)
{
    int till = sqrt(n+1);
    int p=0, res = 1;
    for(int i=0; prime[i]<=till; i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
                p++;
            }
        }
        till = sqrt(n);
        res *= (p+1);
        p = 0;
    }
    if(n>1)
        res *= 2;
    return res;
}
int main()
{
    seivePrime();
    int ans, n;
    scanf("%d", &n);
    ans = NOD(n);
    printf("%d\n", ans);
    return 0;
}
