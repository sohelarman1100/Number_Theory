///PRIME FACTORS

#include<bits/stdc++.h>

using namespace std;

vector <int> vec;

void primefactors(long long int n)
{
    while(n%2==0)
    {
        vec.push_back(2);
        n=n/2;
    }
    for(int i=3; i<=sqrt(n); i+=2)
    {
        while(n%i==0)
        {
            vec.push_back(i);
            n=n/i;
        }
    }
    if(n>2)
        vec.push_back(n);
}

int main()
{
    long long int n,m,i;
    cin>>n;
    primefactors(n);
    for(i=0; i<vec.size(); i++)
        cout<<vec[i]<<" ";
    cout<<endl;
}
