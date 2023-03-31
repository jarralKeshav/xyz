#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin>>str;
    // cout<<str<<endl;
    bool istrue = true;
    int length = str.length();
    for(int i=0; i < length; i++){
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            i+=2;
            if(!istrue){
                cout<<" ";
            }
            continue;
        }
        else{
            istrue=false;
            cout<<str[i];
        }
    }
        cout<<endl;




}