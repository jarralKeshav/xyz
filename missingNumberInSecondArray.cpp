#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;

    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<m;i++)
        {
            if(a[i]==b[j])
            break;
        }
        if(j==m)
        cout<<a[i]<<endl;
    }





}