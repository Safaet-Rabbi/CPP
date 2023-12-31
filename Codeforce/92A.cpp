#include<iostream>
using namespace std;
int main()
{
    int n,m,i,totalchips,presentchips=0;
    cin>>n>>m;
    totalchips=(n*(n+1))/2;
    m%=totalchips;
    for(i=1;i<=n;i++)
    {
        if(m>=i)
        {
            m-=i;
        }
        else
        {
            presentchips=m;
            break;
        }
    }
    cout<<presentchips<<endl;

}
