// here Key used is 3;



#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> chVec;
    vector<char> deVec;

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string str;
    getline(cin,str);
    int len = str.length();
    int ch=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]>='A' && str[i]<='Z'){

            // str[i]+=3;
            ch = str[i]+3;
            ch%=25;
            if(ch<65) 
            {
                ch+=65;
            }
            chVec.push_back(ch);
        }
    }
        for(auto x: chVec)cout<<"Encrypted text: "<<x<<endl;

        for(int i=0;i<len;i++)
        {
            int num = chVec[i]-=65;
            while(num<65)
            {
                num+=25;
            }
            num-=3;

            deVec.push_back(num);
        }
    for(auto y:deVec)cout<<"Decrypted text: "<<y<<endl;




}
