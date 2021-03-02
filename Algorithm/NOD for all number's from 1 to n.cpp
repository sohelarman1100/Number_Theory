/// 1 theke n porjonto sob sonkhar divisor gulo ki ki seti ber kora jay
///complexity n*log(n)
///reference shanto vaier boi

#include<bits/stdc++.h>
using namespace std;

int N=1000000;
vector<int> divisors[1000002];

void div()
{
    int i,j;
    for(i=1; i<=N; i++)
        for(j=i; j<=N; j+=i)  /// i,i+i,i+i+i,..... era sobai i dia divisible tai ei index er vector gulote
            /// i push kora hocche.
            divisors[j].push_back(i); ///inserting i every index of vector which is divisible by i;

}

int main()
{
    div();
    int q;
    cin>>q;
    while(q--)
    {
        int i,j,k,l,m,n;
        cin>>n; ///n= je sonkhar disvisor gulo ki ki ta jante chai sei sonkha holo n....divisors[n] er size
        /// hobe n er divisor sonkha mane divisors[n] er size joto n er tototi divisor ache
        for(i=0; i<divisors[n].size(); i++)
            cout<<divisors[n][i]<<" ";
        cout<<endl;
    }
    return 0;
}
