#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b)
{
    if(b==0) return a;
    return GCD(b, a%b);
}
int LCM(int a, int b)
{
    int gcd = GCD(a, b);
    return (a/gcd)*b;
}
int main()
{
    int ans, n;
    cin >> n;
    int ara[n];
    for(int i=0; i<n; i++)
        cin >> ara[i];
    ans = ara[0];
    for(int i=1; i<n; i++)
        ans = LCM(ans, ara[i]);
    cout << ans << endl;
    return 0;
}
