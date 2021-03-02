#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,l=0,m,n,t,b=0,d=0,b1,b2,b3,b0;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        string s1,s2,a,c;
        //cin>>m>>n;
        cin>>s1>>a>>m;
        cin>>s2>>c>>n;
        if(c.size()==3)
        {
            k=(c[1]-48)+((c[0]-48)*10);
        }
        //cout<<k<<endl;
        l=(n/4-n/100+n/400)-(m/4-m/100+m/400);
        if((m%4==0 && m%100!=0) || (m%4==0 && m%100==0 && m%400==0))
            l+=1;
        //cout<<l<<endl;
        if(((m%4==0 && m%100!=0) || (m%4==0 && m%100==0 && m%400==0)) && s1!="January" && s1[0]!='F')
            l-=1;
        if((((n%4==0 && n%100!=0) || (n%4==0 && n%100==0 && n%400==0)) && s2=="January") || (((n%4==0 && n%100!=0) || (n%4==0 && n%100==0 && n%400==0)) && s2[0]=='F' && k!=29))
            l-=1;
        cout<<"Case "<<i<<": "<<l<<endl;
        k=0;
    }
    return 0;
}

