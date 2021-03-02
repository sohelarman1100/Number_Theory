///MAX SUM SUB ARRAY

///O(n)complexity te kaj kore;
///referance shanto vaier boi;

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,minsum=999999999999999999,mxsum=0,pos1,pos2,cnt=0;
    cin>>n;
    long long int ara[n],cmtvsum[n];
    for(i=0; i<n; i++)
        cin>>ara[i];
    cmtvsum[0]=ara[0];
    if(cmtvsum[0]<0)
        cmtvsum[0]=0;
    for(i=1; i<n; i++)
    {
        cmtvsum[i]=cmtvsum[i-1]+ara[i];   ///cumulative sum calculate hocche;
        if(cmtvsum[i]<0)
            cmtvsum[i]=0;
    }
    int pos=0;
    for(i=0; i<n; i++)
    {
        if(cmtvsum[i]>mxsum)
        {
            mxsum=cmtvsum[i];
            pos2=i;
            pos=pos1;
        }
        if(cmtvsum[i]==0)
        {
            pos1=i+1;
        }
    }
    cout<<"maximum sum of sub array of this given array is : "<<mxsum<<endl<<endl;
    cout<<"the element of the sub array for which we get max sum are : "<<endl<<endl;
    if(pos==0)
    {
        for(i=pos; i<=pos2; i++)/// ara er pos theke pos2 er element gulor jonno max sum paowa gese
            cout<<ara[i]<<"  ";
        cout<<endl;
    }
    else
    {
        for(i=pos; i<=pos2; i++)
            cout<<ara[i]<<"  ";
        cout<<endl;
    }
    return 0;
}

/*
ara[9]={10,5,-15,7,9,-15,3,5,20}
cmtvsum[9]={10,15,0,7,16,1,4,9,29}
tahole ei khetre max sum 29 paowa jay jeti ara er 3 number index theke last index mane 8 number index
er jogfol*/
