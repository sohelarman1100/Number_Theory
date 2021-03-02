#include<bits/stdc++.h>
using namespace std;

int way(int x, int y)
{
    return x>y;
}

int main()
{
    int i,j,k,l,n;
    cin>>n;
    int ara[n];
    for(i=0; i<n; i++)
        cin>>ara[i];
    sort(ara,ara+n,way);
    for(i=0; i<n; i++)
        cout<<ara[i]<<" ";
    return 0;
}
