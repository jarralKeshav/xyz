#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    fastread()
    int t ;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        // int found=0;
        cin>>x>>y>>n;
        int ans =0;
        int a = n%x;
        if((a-y)>=0){
            ans = n-(a-y);
        }
        else{
            ans = n-x-a+y;
        }
        cout<<ans<<endl;
       
        
    }
}