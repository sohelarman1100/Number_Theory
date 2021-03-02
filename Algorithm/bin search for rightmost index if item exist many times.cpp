///BINARY SEARCH FOR R M I

#include<bits/stdc++.h>
using namespace std;
int bin(int a[], int n, int k)
{
    int p=-1;
    int l=0,h=n-1,m;
    while(l<=h)
    {
        m=(l+h)/2;
        if(abs(l-h)==1 && p==m && a[h]>k)
            return m;
        else if(abs(l-h)==1 && a[h]==k)
            return h;
        if(k>=a[m])
        {
            l=m;
            if(k==a[m])
                p=m;
        }
        if(k<a[m])
            h=m;
    }
}
int main()
{
    int a;
    int b[10]= {1,3,3,5,5,5,7,10,10,12};
    cin>>a;
    cout<<"pos="<<bin(b,10,a)<<endl;
    return 0;
}


