#include <bits/stdc++.h>

using namespace std;

long long ara[50][40];
long long nCr(int n, int r)
{
    if(n == r) return 1;
    if(r == 1) return n;
    if(ara[n][r]!=0) return ara[n][r];
    return ara[n][r] = nCr(n-1, r) + nCr(n-1, r-1);
}
int main()
{
    int n = 10, r = 7;
    long long ans = nCr(n, r);
    cout<<ara[4][3]<<endl;
    cout << ans << endl;
    return 0;
}
