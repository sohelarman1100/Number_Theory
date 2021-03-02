#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
/*
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
*/
ll way(pair<ll,ll> x,pair<ll,ll> y)
{
    if(x.first==y.first)
        return x.second<y.second;
    else
        return x.first<y.first;
}
int main()
{
    ll i,j,k,l,m,n;
    cin>>n;
    ll ara1[n];
    vector<pair<ll,ll> >vec;
    for(i=0; i<n; i++)
    {
        cin>>ara1[i];
        vec.pb(mp(ara1[i],i));
    }
    sort(vec.begin(),vec.end(),way);
    for(i=0; i<vec.size(); i++)
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    return 0;
}

