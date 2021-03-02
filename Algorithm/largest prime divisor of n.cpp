///reference google codebuddy.co.in
/// complexity q+nlog(n) here q=no of query and n=jar largest prime factor ber kora lagbe

#include<bits/stdc++.h>
using namespace std;

int N=1000000;
int lp[1000001];///lp er protiti index e oi index er largest prime divisor je sonkha sei sonkha store
/// kora hobe ,jemon 15 er largest prime divisor 5 tai lp[15]=5 rakha hobe|


void sieve()
{
    memset(lp, 0, sizeof(lp));

    for(int i = 2; i*i <= N; i++) {
        if(lp[i] == 0) {
            for(int j = i; j <= N; j += i)
                lp[j] = i;
        }
    }
}

int main()
{
    sieve();
    int q, n, i;
    cin >> q;

    while(q--) {
        cin >> n;

        cout << lp[n] << endl;
    }
    return 0;
}
