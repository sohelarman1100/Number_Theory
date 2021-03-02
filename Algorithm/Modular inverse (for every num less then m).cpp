///modular inverse for every number from 1 to m-1 here m=the number by whom we will mod(%) every number from
///1 to m-1;
///complexity O(n);

#include<bits/stdc++.h>
using namespace std;
int inv[1000000];
int main()
{
    int m;
    cin>>m;
    inv[1] = 1;
    for(int i = 2; i < m; ++i)
        inv[i] = (m - (m/i) * inv[m%i] % m) % m;/// sutro, proman cp-algorithm e ache;
    for(int i=1; i<m; i++)
        cout<<inv[i]<<" ";
    cout<<endl;
}

