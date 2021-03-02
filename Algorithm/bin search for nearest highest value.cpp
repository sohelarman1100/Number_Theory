///BINARY SEARCH FOR NEAREST H V

#include<bits/stdc++.h>
using namespace std;
int bin(int a[], int n, int k)
{
    int l=0,h=n-1,m;
    while(l<=h)
    {
        m=(l+h)/2;
        if(l==h)
        {
            if(a[m]>=k)
                return m+1;
            else
                return -1;
        }
        if(abs(l-h)==1 && a[l]<=k)
        {
            if(a[l]==k)
                return l+1;
            else if(a[l]<k && a[h]>=k)
                return h+1;
            else
                return -1;
        }
        if(abs(l-h)==1 && a[l]>k && a[h]>k)
            return l+1;
        if(a[m]==k)
            return m+1;
        if(k>a[m])
            l=m;
        if(k<=a[m])
            h=m;
    }
}

int main()
{
    int a;
    int b[8]= {3,4,7,9,10,15,18,20};
    while(1)
    {
        cin>>a;
        cout<<"pos="<<bin(b,8,a)<<endl;
    }
    return 0;
}


