///BINARY SEARCH FOR NEAREST L V
///je value search kora hocche seti thakle tar position return korbe na hoy tar nearest value er pos return
///korbe;
///je sonkha search kora hobe seti na thakle tar choto emon sonkha jar sathe tar difference onno choto sonkha
///gulor cheye kom setir pos return korbe ar jake search kora hobe seti ba tar cheye choto kono sonkha na
/// thakle -1 return korbe ||
#include<bits/stdc++.h>
using namespace std;
int bin(int a[], int n, int k)
{
    int l=0,h=n-1,m;
    while(l<=h)
    {
        m=(l+h)/2;
        if(l==h)///jodi array te shudhu ekti element thake ba kono karone low and high equal hoye jay|||
        {
            if(a[m]<=k)
                return m+1;
            else
                return -1;
        }
        if(abs(l-h)==1 && a[h]>=k)
        {
            if(a[h]==k)///exact je value search kora hoyeche seti i paowa geche tai seti nijei nearest lowest
                ///value;
                return h+1;
            else if(a[h]>k && a[l]<=k)
                return l+1;
            else
                return -1;
        }
        if(abs(l-h)==1 && a[h]<k && a[l]<k)///jodi low & high duto thekei search kora sonkha boro hoy||
            return h+1;
        if(k>=a[m])
            l=m;
        if(k<a[m])
            h=m;
    }
}
int main()
{
    int a;
    int b[8]= {2,3,3,4,10,15,18,20};
    //int b[1]= {5};
    while(1)
    {
        cin>>a;
        cout<<"pos="<<bin(b,8,a)<<endl;
    }
    return 0;
}


