#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define LL long long
/*For Bitwise Sieve*/
#define MAX 10000001
#define LIM 3164
int flagArr[MAX>>6];
int arrVal[MAX];
#define ifComp(x) (flagArr[x>>6]&(1<<((x>>1)&31)))
#define isComp(x) (flagArr[x>>6]|=(1<<((x>>1)&31)))
/*Euler Totient Function*/
int phi(int n)
{
     int result=n;
     for(int i=2;i*i<=n;++i)
          if(n%i==0)
          {
               while(n%i==0)
                    n/=i;
               result-=result/i;
          }

          if(n>1)
               result-=result/n;
     return result;
}
unsigned long long Factorial(int n)
{
       if(n==0 || n==1)
              return 1;
       else
              return n*Factorial(n-1);
}
LL ModularExponention(LL x,unsigned LL n,LL p=mod)
{
       int y=1,u=x%p;
       while(n)
       {
              if(n&1) // to check if last bit is 1 or not
              {
                     y=(y*u)%p;
              }
              n>>=1;
              u=(u*u)%p;
       }
       //cout<<"The Answer using Modular exponentiation is "<<y;
       return  y;
}
/*To populate the array that stores the number of primes <=index*/
void Sieve()
{
       register int i,j,k;
       for(i=3;i<LIM;i+=2)
       {
              if(!ifComp(i))
              {
                     for(j=i*i,k=i<<1;j<MAX;j+=k)
                            isComp(j);
              }
       }
       //printf("2\n");
       arrVal[2]=1;
       for(i=3;i<MAX;i++)
       {
            if(i%2 && !ifComp(i))
            {
               arrVal[i]=arrVal[i-1]+1;
               }
               else
                  arrVal[i]=arrVal[i-1];
       }
}
int main() {
     int t,n;
     scanf("%d",&t);
     Sieve(); // to populate array for prime count
     while(t--)
     {
          scanf("%d",&n);
          int k=phi(n);
          int fn=arrVal[n]-k;
          if(fn<0)
               fn=0;
          LL gn=ModularExponention(k,Factorial(fn))%mod;
          printf("%lld\n",gn);
     }
     return 0;
}
