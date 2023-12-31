#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i;
    cin>>n;

    vector<int>years(n-1);
    for ( i = 0; i < n-1; i++)
    {
       cin>>years[i];
    }
    int a,b;
    cin>>a>>b;
    int TotalYears=0;
    for ( i = a; i < b; i++)
    {
        TotalYears+=years[i-1];
    }
    cout<<TotalYears<<endl;
    
    
}