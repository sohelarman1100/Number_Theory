#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int i,j,k=0,l,m=1,n=0,t,l1,l2,p=0,q=0;
    cin>>t;
    int a[4],b[4];
    for(i=1; i<=t; i++)
    {
        string str,ara;
        cin>>str>>ara;
        l1=str.size();
        l2=ara.size();
        for(j=l1-1; j>=0; j--)
        {
            if(str[j]!='.')
            {
                k+=(str[j]-48)*m;
                m*=10;
            }
            else
            {
                a[n++]=k;
                k=0;
                m=1;
            }
        }
        a[n]=k;
        k=0;
        m=1;
        n=0;
        for(j=l2-1; j>=0; j--)
        {
            if(ara[j]!='.')
            {
                k+=(ara[j]-48)*pow(2,p);
                p++;
            }
            else
            {
                b[n++]=k;
                k=p=0;
            }
        }
        b[n]=k;
        for(j=0; j<4; j++)
        {
            if(a[j]==b[j])
                q++;
        }
        if(q==4)
            cout<<"Case "<<i<<": Yes"<<endl;
        else
            cout<<"Case "<<i<<": No"<<endl;

        k=p=n=q=0;
    }
    return 0;
}

