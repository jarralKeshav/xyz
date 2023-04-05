#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        transform(str.begin(),str.end(),str.begin(), ::toupper);

        if(str.find("YES")){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    


        




    }
}