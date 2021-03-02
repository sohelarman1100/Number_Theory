#include<bits/stdc++.h>

using namespace std;

int n=1000000,k=0,cnt=0;
vector<pair<int,int> > mark(1000005);///vector tir proti index er first position diye i tomo sonkha prime
///kina seti track rakha hoyeche and second position diye i tomo sonkkha porjonto kototi fear prime ache ta
///track rakha hoyeche|

void seivePrime()
{
    int i,j,limit=sqrt(n*1)+2;
    mark[1].first=1;
    mark[1].second=0;
    //cout<<mark[1].first<<" "<<mark[1].second<<endl;
    /*for(i=4; i<=n; i+=2)
        mark[i]=1;*/
    for(i=2; i<=n; i++)
    {
        int p=i,md,x=1,sum=0,cnt1=0;
        if(!mark[i].first)
        {
            while(p>=10)
            {
                md=p%10;
                p=p/10;
                sum+=(md*x);
                x*=10;
                if(md==0 || mark[sum].first==1) ///sonkhatir kono digit 0 thakle fear prime hobena tai
                    ///jehetu mod right sight theke ekti kore digit tar moddhe update kore rakhse tai
                    ///kono somoy mod 0 howar mane sonkhatite 0 digit ti ache and sonkhati fear prime na
                    ///abar mark[sum].first==1 eti diye check kora hocche sonkha tir moddhe jodi d sonkhok
                    ///digit thake tahole sonkhatir left side theke je kono sonkhok [1 theke d-1 porjonto]
                    /// baad dile je je sonkha hoy segulor moddhe konoti non prime kina|
                {
                    cnt1++;
                    break;
                }
                //cout<<"*"<<endl;
            }
            if(cnt1==0)
            {
                cnt++;
                //cout<<"cnt= "<<cnt<<endl;
            }

            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=i)
                    mark[j].first=1;
            }
        }

        mark[i].second=cnt;
    }

}

int main()
{
    seivePrime();
    //cout<<mark[2].first<<" "<<mark[2].second<<endl;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int k;
        scanf("%d",&k);
        int res=mark[k].second;
        printf("%d\n",res);
    }
    return 0;
}
