
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN=1000010;
int prime[MAXN];
int main()
{
    int x0,x1,x2;
    cin>>x2;
    for(int i = 2;i<=x2;i++)
    {
        if(prime[i] == 0)
        {
            for(int j = i+i;j <= x2;j+=i)
            {
                prime[j] = i;
            }
        }
    }
    int ans = x2;
    for(int i = x2-prime[x2]+1;i<=x2;i++)
    {
        ans = min(ans,i - prime[i] +1);
    }
    cout<<ans<<endl;
    return  0;
}
