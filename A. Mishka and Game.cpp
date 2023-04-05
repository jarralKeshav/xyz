#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    int m=0,c=0;
    int sumC=0,sumM=0;
    for(int i=0;i<t;i++)
    {
        cin>>m>>c;

        if(m>c)sumM++;
        if(m<c)sumC++;
    }
    if(sumM>sumC)cout<<"Mishka"<<endl;
    if(sumC>sumM)cout<<"Chris"<<endl;
    if(sumC==sumM)cout<<"Friendship is magic!^^"<<endl;
    // cout<<sumM<<sumC<<endl;
}