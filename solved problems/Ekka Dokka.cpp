#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k=0,l,m,n,t;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        if(n%2!=0)
            cout<<"Case "<<i<<": Impossible"<<endl;
        else
        {
            while(1)
            {
                n/=2;
                if(n!=1)
                   k++;
                if(n%2!=0 && n!=1)
                {
                    k=pow(2,k);
                    cout<<"Case "<<i<<": "<<n<<" "<<k<<endl;
                    break;
                }
                if(n==1)
                {
                    cout<<"Case "<<i<<": Impossible"<<endl;
                    break;
                }
            }
            k=0;
        }
    }
    return 0;
}

