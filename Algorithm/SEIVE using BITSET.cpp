///SEIVE using bitset for finding all primes from 1 to 10^8

#include<bits/stdc++.h>

using namespace std;

int n=100000000,k=0;
bitset<100000001> prime;
void seivePrime()
{
    prime.flip();
    prime.reset(1);

    int limit = sqrt(100000000) + 1;

    // Perform sieve of Eratosthenes
    for(int i = 2; i <= limit; ++i)
    {
        if(prime.test(i))
            for(int j = 2*i; j <=n; j+=i)
                prime.reset(j);
    }
}

int main()
{
    seivePrime();

    for(int i=1; i<=n ; i++)
        if(prime.test(i))
            cout<<i<<" ";
    cout<<endl;
    return 0;
}
