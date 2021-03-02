///reference google codebuddy.co.in
/// complexity q+nlog(n) here q=no of query and n=jar smallest prime factor ber kora lagbe

#include<bits/stdc++.h>
using namespace std;
int N=1000000;
int sp[1000001]; ///sp er protiti index e oi index er smallest prime divisor je sonkha sei sonkha store
/// kora hobe ,jemon 8 er smallest prime divisor 2 tai sp[8]=2 rakha hobe|

void sieve()
{
    memset(sp, 0 , sizeof(sp));

    for(int i = 2; i*i <= N; i++)
    {
        if(sp[i] == 0)
        {
            for(int j = i; j <= N; j += i)
                if(sp[j] == 0)
                    sp[j] = i;
        }
    }
}

int main()
{
    sieve();
    int q, n, i;
    cin >> q;

    while(q--)
    {
        cin >> n;

        cout << sp[n] << endl;
    }
    return 0;
}
