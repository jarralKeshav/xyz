// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int n;
//     int sum1=0,sum2=0;
//     cin>>n;
    
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];


//     }
//     int i=0;
//     int j=n-1;
//     int k=1;
//     cout<<"i and j "<<i<< j<<endl;
//     while(i<=j)
//     {   

        
//         if(k%2!=0){        
//         cout<<"k "<<k<<endl;
//         if(arr[i]>arr[j]){
//             sum1+=arr[i];
//             i++;
//             cout<<"sum1 "<<sum1<<endl;
//         }
//         if(arr[j]>arr[i]){
//             sum1+=arr[j];
//             j--;
//             cout<<"Sum1 "<<sum1<<endl;
//         }
//         }

//         else{
//             if(arr[i]>arr[j]){
//             sum2+=arr[i];
//             i++;
//             cout<<"sum2 "<<sum2<<endl;
//         }
//         if(arr[j]>arr[i]){
//             sum2+=arr[j];
//             j--;
//             cout<<"Sum2 "<<sum2<<endl;
//         }
        
//         }
//         k++;
//     }
        
        
        
    
//     cout<<sum1<<" "<<sum2<<endl;

    
//     return 0;

// }



#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i;
    while(cin>>n)
    {
        ll a[n+2];
        for(i=1;i<=n;i++)
            cin>>a[i];
        ll left=1,right=n,sum1=0,sum2=0;
        i=1;
        while(left<=right)
        {
            if(i%2==1)
            {
                if(a[left]>=a[right])
                    sum1+=a[left++];
                else
                    sum1+=a[right--];
            }
            else
            {
                if(a[left]>=a[right])
                    sum2+=a[left++];
                else
                    sum2+=a[right--];
            }
            i++;
        }
        cout<<sum1<<" "<<sum2<<endl;
    }
    return 0;
}