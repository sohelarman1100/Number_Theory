#include<bits/stdc++.h>
using namespace std;
double lg[1000005];
int main()
{
    long long int i,j=1,m,n,b,t;
    cin>>t;
    lg[0]=0.0;
    for(i=1; i<=1000000; i++)
        lg[i]=lg[i-1]+log(i);
    while(t--)
    {
        double l;
        cin>>n>>b;
        l=log(b);
        m=floor(lg[n]/l)+1;
        cout<<"Case "<<j<<": "<<m<<endl;
        j++;
    }
    return 0;
}
