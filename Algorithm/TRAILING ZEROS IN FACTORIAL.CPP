///trailing zeros in factorial

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,l,m=1,n;
    cin>>n;
    while(pow(5,m)<=n)
    {
        k+=n/pow(5,m);
        m++;
    }
    cout<<k<<endl;
    return 0;
}
