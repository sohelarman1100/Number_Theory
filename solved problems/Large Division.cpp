#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,t;
    long long int p,q;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        char s[205];
        cin>>s>>n;
        if(s[0]!='-')
        {
            p=s[0]-48;
            l=strlen(s);
            for(j=0; j<l-1; j++)
            {
                if(p>=n)
                {
                    p=p%n;
                    p=(p*10)+(s[j+1]-48);
                }
                else
                {
                    p=(p*10)+(s[j+1]-48);
                }
            }
            if(p%n==0)
                cout<<"Case "<<i<<": divisible"<<endl;
            else
                cout<<"Case "<<i<<": not divisible"<<endl;
        }
        else
        {
            p=s[1]-48;
            l=strlen(s);
            for(j=1; j<l-1; j++)
            {
                if(p>=n)
                {
                    p=p%n;
                    p=(p*10)+(s[j+1]-48);
                }
                else
                {
                    p=(p*10)+(s[j+1]-48);
                }
            }
            if(p%n==0)
                cout<<"Case "<<i<<": divisible"<<endl;
            else
                cout<<"Case "<<i<<": not divisible"<<endl;
        }
    }
    return 0;
}

