/// 1 theke n porjonto sob sonkhar divisor gulor sum ber kora jay
///complexity n*log(n)
///reference shanto vaier nod er sathe mil rekhe kora

#include<bits/stdc++.h>
using namespace std;

int N=1000000;
long long sum[1000002];

void div()
{
    int i,j;
    for(i=1; i<=N; i++)
        for(j=i; j<=N; j+=i)  /// i,i+i,i+i+i,..... era sobai i dia divisible tai array er ei index gulote
            /// i sum kora hocche.
            sum[j]+=i;; ///summing i every index of array sum which is divisible by i;

}

int main()
{
    div();
    int q;
    cin>>q;
    while(q--)
    {
        int i,j,k,l,m,n;
        cin>>n; ///n= je sonkhar disvisor gulor sum jante chai sei sonkha holo n
        cout<<sum[n]<<endl;
    }
    return 0;
}
