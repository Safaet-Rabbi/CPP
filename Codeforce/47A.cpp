#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double check = sqrt(1+8*static_cast<double>(n));
    if(floor(check)==check)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
