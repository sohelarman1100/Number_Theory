#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,t,s,sz;
    cin>>t;
    for(j=1; j<=t; j++)
    {
        vector <int> vec1;
        vector <int> vec2;
        cin>>m>>n;
        k=m-n;
        s=sqrt(k);
        for(i=1; i<=s; i++)
        {
            if(k%i==0 && m%i==n)
                   vec1.push_back(i);
                   //vec2.push_back(k/i);
            if(k%(k/i)==0 && k%i==0 && m%(k/i)==n && k/i!=i)
                vec1.push_back(k/i);
        }
        sort(vec1.begin(),vec1.end());
        sz=vec1.size();
        cout<<"Case "<<j<<":";
        if(sz==0)
            cout<<" impossible";
        for(i=0; i<sz; i++)
                cout<<" "<<vec1[i];
        cout<<endl;
    }
    return 0;
}

