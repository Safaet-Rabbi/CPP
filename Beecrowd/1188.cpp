#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char operation;
    cin>>operation;
    double m[12][12];
    int i,j;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin>>m[i][j];
        }
    }
    double sum=0;
    int count=0;
    for ( i = 7; i <=11; i++)
    {
       for ( j = 11-i+1;j<i; j++)
       {
        sum+=m[i][j];
        count++;
       }
       
    }
    if (operation=='M')
    {
        double avg=sum/count;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }
    else if (operation=='S')
    {
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    
    
    
}