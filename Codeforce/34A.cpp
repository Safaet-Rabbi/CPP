#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int n,i,diff;
    cin >> n;
    vector<int>heights(n);
    for ( i = 0; i < n; i++)
    {
        cin>>heights[i];
    }
    int minDiff,sol1=0,sol2=1;
    minDiff=abs(heights[0]-heights[1]);
    for(i=1;i<n;i++)
    {
        diff=abs(heights[i]-heights[(i+1)%n]);
        if (diff<minDiff)
        {
          minDiff=diff;
          sol1=i;
          sol2=(i+1)%n;
        }
        

    }
    cout<<sol1+1<<" "<<sol2+1<<endl;
    

}