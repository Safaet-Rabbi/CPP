#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    int i,n=s.length();
    bool isReverse=true;
    if(n!=t.length())
    {
        isReverse=false;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if (s[i]!=t[n-1-i])
            {
             isReverse=false;
             break;
            }
            
        }
    }
    if(isReverse)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
}