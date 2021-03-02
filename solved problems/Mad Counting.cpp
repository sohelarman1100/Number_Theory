#include<bits/stdc++.h>
using namespace std;
int ara[1000005];
int main()
{
    int i,t;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int j,k,l,m,n,mx=-1,sum=0;
        cin>>n;
        //int ara[n];
        memset(ara,0,sizeof(ara));
        for(j=0; j<n; j++)
        {
            cin>>m;
            if(m>mx)
                mx=m;
            ara[m]++;
            if(ara[m]>m)
            {
                sum+=m+1;
                ara[m]=0;
            }
        }
        for(j=0; j<mx+2; j++)
        {
            if(ara[j]>0)
                sum+=j+1;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
