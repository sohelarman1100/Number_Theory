///reference geeksforgeeks using permets theorem
///complexity 10^6 theke 10^7 er jonno 1 sec e kaj kore
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
using namespace std;
long long power(long long x, long long y, long long p)
{
    long long res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
    // equal to p

    while (y > 0)   ///bigmod operation;
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

// Returns n^(-1) mod p
long long modInverse(long long n, long long p)
{
    return power(n, p-2, p); ///modinverse e power hisebe default p-2 oathano lage;
}

// Returns nCr % p using Fermat's little
// theorem.
long long fac[1000005];
void factorial()
{
    fac[0]=1;
    fac[1]=1;
    for(long long i=2; i<=1000000; i++)
    {
        fac[i]=((i%mod)*(fac[i-1]%mod))%mod;
    }
}
long long nCrModPFermat(long long n, long long r, long long p)
{
    // Base case
    if (r==0)
        return 1;

    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    return (fac[n]* modInverse(fac[r], p) % p *   ///ncr = n!/(r!*(n-r)!);
            modInverse(fac[n-r], p) % p) % p;
}

int main()
{
    //long long mod=1000000007;
    factorial();///pre claculating (factorial of every num)%MOD;
    long long i,j,k,l,m,n,r;
    cout<<"enter two number n and r: ";
    cin>>n>>r;
    for(i=1; i<=r; i++)
    {
        long long ans=nCrModPFermat(n, i, mod);///calculating nci
        cout<<ans<<endl;
    }
}

