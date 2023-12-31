#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int>gifts(n);
    vector<int>result(n);
    for(i=0;i<n;i++)
    {
        cin>>gifts[i];
    }
    for(i=0;i<n;i++)
    {
        result[gifts[i]-1]=i+1;
    }
    for(i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }

}