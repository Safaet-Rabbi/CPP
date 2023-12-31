#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int i,t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        vector<int>a(n);
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i-1]>1)
            {
                break;
            }
        }
        if (i==n)
        {
            cout<<"YES"<<endl;
            /* code */
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
}