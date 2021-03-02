///complexity n*log(n)+q........q=no.of test case
///1-n porjonto protiti sonkhar divisor sonkha kototi seti ber kora jay

#include<bits/stdc++.h>
using namespace std;
int N=1000000;
int NoD[1000001];///protiti index e oi index er koyti divisor ache ta store kore

void sieve()
{
    memset(NoD, 0, sizeof(NoD));

    for(int i = 1; i <= N; i++) {
        for(int j = i; j <= N; j += i)
            NoD[j]++;

    }
}

int main()
{
    sieve();
    int q, n, i;
    cin >> q; ///no. of test case

    while(q--) {
        cin >> n;

        cout << NoD[n] << endl;
    }
    return 0;
}
