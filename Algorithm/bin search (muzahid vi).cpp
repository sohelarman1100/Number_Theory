#include<bits/stdc++.h>
using namespace std;
int bin(int ara[],int n, int k)
{
    int l=0,h=n-1,mid,ans=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(ara[mid]>=k)
        {
            h=mid-1;
            ans=mid;
        }
        else
            l=mid+1;
    }
    return ans;
}

int main()
{
    int i,j,k,l,m,n;
    cin>>n;
    int ara[n];
    for(i=0; i<n; i++)
        cin>>ara[i];
    sort(ara,ara+n);
    cout<<"enter the number you want to search: ";
    cin>>k;
    int ans=bin(ara,n,k);///array te k thakle k er pos dibe...k na thakle k er nearest highest
    /// num er pos dibe...pos sort kora array er upor base kore dibe;
    if(ans==0)
        cout<<"there is no valid value"<<endl;
    else
        cout<<"pos= "<<ans+1<<"    value= "<<ara[ans]<<endl;
    return 0;
}
