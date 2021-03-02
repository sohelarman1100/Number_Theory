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
    int a, b, ans;
    cin >> a >> b;
    ans = LCM(a,b);
    cout << ans << endl;
    return 0;
}
