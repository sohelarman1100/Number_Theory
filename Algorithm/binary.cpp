/// BINARY SEARCH

#include<bits/stdc++.h>
using namespace std;
int bin(int a[], int n, int k)
{
    int p=0;
    int l=0,h=n-1,m;
    while(l<=h)
    {
        m=(l+h)/2;
        if(a[m]==k)
            return m;
        if(k>a[m])
            l=m+1;
        if(k<a[m])
            h=m-1;
    }
    return l;
}
int main()
{
    int a;
    cin>>a;
    int b[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<bin(b,10,a)<<endl;
    return 0;
}


