///DIGITS IN FACTORIAL

#include<bits/stdc++.h>
using namespace std;
int main()
{
    float i,j,k,l,m,n;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        m+=log10(i);  ///log10(1*2*3*4*5)=log10(1)+log10(2)+log10(3)+log10(4)+log10(5)..since n!=1*2*3*4*5
    }                 ///so we determine how many digits in number p (p= any number from 1 to n)..actually we will find
    m=(int)m;         /// 1 digit less from the actual digit of any number p so in output operation we add extra 1
    cout<<m+1<<endl;  /// with m.
    return 0;
}
