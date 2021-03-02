#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl

ll sum_powarr[35],powarr[35];
ll bin(ll prvs, ll pre, ll n)
{
    ll l=1,h=n,mid,ans=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(pre+sum_powarr[mid]>=prvs)
        {
            h=mid-1;
            ans=mid;
        }
        else
            l=mid+1;
    }
    return ans;
}
void powfun()
{
    ll i,j,k,l,m,n;
    powarr[1]=1;
    for(i=2; i<35; i++)
        powarr[i]=pow(2,i-1);
    for(i=1; i<35; i++)
        sum_powarr[i]=powarr[i]+sum_powarr[i-1];
}
int main()
{
    powfun();
    ll q;
    cin>>q;
    while(q--)
    {
        ll i,j,k,l,m,n,ans=0;
        cin>>n;
        ll ara[n];
        for(i=0; i<n; i++)
            cin>>ara[i];
        for(i=1; i<n; i++)
        {
            if(ara[i]<ara[i-1])
            {
                k=bin(ara[i-1],ara[i],34);
                ans=max(ans,k);
                l=sum_powarr[k];
                for(j=k; j>0; j--)
                {
                    if(ara[i]+(l-powarr[j])>ara[i-1])
                        l-=powarr[j];
                }
                //cout<<l<<endl;
                ara[i]+=l;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
