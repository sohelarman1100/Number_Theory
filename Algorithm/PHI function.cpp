///kono ekti nirdisto sonkhar kototi coprime ache ta ber kore

#include<bits/stdc++.h>
using namespace std;

int phi(int n)
{
    int result = n;

    for (int p = 2; p * p <= n; ++p)
    {

        /// Check if p is a prime factor.
        if (n % p == 0)
        {
            while (n % p == 0)
            {
                n /= p;
            }
            result =result - (result / p); ///phi=n*(1-(1/p1))(1-(1/p2))...
        }
    }

    /// If n has a prime factor greater than sqrt(n)
    /// (There can be at-most one such prime factor)
    if (n > 1) ///n ke vag korte korte jokhon for loop er bitor ar kono songkha dia vag jabena tokhon
        /// n er last je update value thake seti ekti prime number hobe ja initially n er je man thake tar
        ///prime factor
        result =result- (result / n);
    return result;
}

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
        printf("phi(%d) = %d\n", i, phi(i));
    return 0;
}
