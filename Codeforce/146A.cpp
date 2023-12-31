#include<iostream>
#include<string>
using namespace std;
int main()
{
    string ticket;
    int n;
    cin>>n;
    cin>>ticket;
    bool is_lucky=true;
    int fhalf_sum=0,shalf_sum=0,i;
    for(i=0;i<n;i++)
    {
        if (i<(n/2))
        {
            fhalf_sum+=ticket[i]-'0';
        }
        else
        {
            
        
            shalf_sum+=ticket[i]-'0';
        
        }
        if (ticket[i]!='4'&& ticket[i]!='7')
        {
           is_lucky=false;
        }  
    }
    if (is_lucky && fhalf_sum==shalf_sum)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
}