/// ekti sonkhar koyti divisor ache & divisor gulo ki ki ta ber kora hoy

#include<bits/stdc++.h>
using namespace std;

vector <long long int> vec;

void NOD(long long int n)
{
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(i*i==n)
                vec.push_back(i);
            else
            {
                vec.push_back(i);
                vec.push_back(n/i);
            }
        }
    }
    sort(vec.begin(),vec.end());
}

int main()
{
    long long int i,j,m,n;
    cin>>n;
    NOD(n);
    cout<<"number of divisor's : "<<vec.size()<<endl<<endl<<"and they ara :"<<endl<<endl;
    for(i=0; i<vec.size(); i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    return 0;
}
