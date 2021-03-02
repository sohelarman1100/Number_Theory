///source cp-algorithm
///modular inverse

#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b, int & x, int & y)
{
    if (a == 0)
    {
        x = 0;
        y = 1;
        return b;
    }
    int x1, y1;
    int d = gcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}

int main()
{
    int a,b,i,j,k,l,x,y,m;
    //int *x,*y;
    cout<<"enter number 'a' you want to find modular inverse and number 'b' you want to mod 'a' by 'b' :"<<endl;
    cin>>a>>b;
    m=b;
    int g=gcd(a,b,x,y);  ///x & y er address pass kora hoyeche tai gcd function e jodi x & y change hoy
    /// tahole main function er moddheo x ar y er maan change hoye seti hobe;
    if (g != 1)
    {
        cout << "No solution!";
    }
    else
    {
        x = (x % m + m) % m;/// gcd er jonno 'a' er je sohog paowa gese seti use kore 'a' er mod inverse ber
        /// korar sutro

        /// jodi bole 1 theke n porjonto kon kon sonkha 'a' er modular inverse hote pare tokhon i=0 theke n
        ///porjonto loop chaliye x'=x+(i*m) sutro diye 'a' er sobgulo modular inverse x' ber kora somvob;
        cout << x << endl;
    }
    return 0;
}

