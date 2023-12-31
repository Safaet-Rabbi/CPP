#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i;
    int j=1,n,p=0,q=0,r;
    while (true)
    {
       cin>>n;
       if(n==0)
       
        break;
       
       else
       {
        j=1,p=0,q=0;
        vector<vector<int>> arr(n,vector<int>(n));
        i=n;
        if(n%2==0)
        
            r=n/2;
        
        else if(n%2==1)
        
            r=(n/2)+1;
        for ( c = 1; c <=r; c++)
        {
           for(a=p;a<i;a++)
           {
            for(b=q;b<i;b++)
            {
                arr[a][b]=j;
            }
           
           }
            j++;
            q++;
            p++;
            i--;
           
        }
        for(g=0;g<n;g++)
           {
            for(h=0;h<n;h++)
            {
                if(h==0)
                {
                    cout<<setw(3)<<arr[g][h];
                }
                else
                {
                    cout<< " " << setw(3)<<arr[g][h];
                }
               
            }
            cout<<endl;
           }
            cout<<endl;
       }
       
    }
    
}