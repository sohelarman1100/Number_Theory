#include <bits/stdc++.h>

using namespace std;

char prime_b[100000000];
vector<int>prime;
//vector<pair<int, int> >fac;
int n=100000000;

void seivePrime()
{
    int till =n;
    for(int i=4; i<=till; i+=2)
        prime_b[i] = 1;
    int limit = sqrt(till)+1;
    for(int i=3; i<=limit; i+=2)
        if(!prime_b[i])
            for(int j=i*i; j<=till; j+=(i*2))
                prime_b[j] = 1;
    prime.push_back(2);
    for(int i=3; i<=till; i+=2)
        if(!prime_b[i])
            prime.push_back(i);
}

vector<pair<int, int> > factorization(int k)
{
    vector<pair<int, int> >fac;
    int till = sqrt(k+1);
    for(int i=0; prime[i]<=till; i++)
    {
        if(k%prime[i]==0)
        {
            int cnt=0;
            while(k%prime[i]==0)
            {
                k/=prime[i];
                cnt++;
            }
            fac.push_back(make_pair(prime[i],cnt));
            till = sqrt(k);
        }
    }
    if(k>1)
        fac.push_back(make_pair(k,1));

    return fac;
}
int main()
{
    seivePrime();
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,k,l,m,n;
        cin>>k;
        vector<pair<int, int> >fac = factorization(k);
        for(i=0; i<fac.size(); i++)
            cout<<i+1<<"th prime factor is "<<fac[i].first<<" and it axist for "<<fac[i].second<<" times"<<endl;
    }
}
