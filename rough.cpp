#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Keshav";
    string str1 = str.tolower();
    cout<<str1<<endl;
    if(str.find("keshav")!=string ::npos)
    {
        cout<<"Yes";
    }
    else{
        cout<<"NO"<<endl;
    }
}