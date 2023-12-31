#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c,d,e,f=1,g=2,h,i=0;
    int j=0,N,I,J;
    while (true)
    {
       cin>>N;
       if(N==0)
       
        break;
       
       else
       {
       
        vector<vector<int>> arr(N,vector<int>(N,1));
        I=N-1;
        J=N;
        for(e=0,f=1,g=2;e<I;e++)
        {
            for(c=0,d=f;d<N;d++,c++)
            
                arr[c][d]=g;
                f++;
                g++;
            
        } 
         for(e=0,f=1,g=2;e<I;e++)
        {
          for(c=f,d=0;c<N;d++,c++)
           
                arr[c][d]=g;
                f++;
                g++;
           
           
           
        }
        for(i=0;i<N;i++)
           {
            for(j=0;j<N;j++)
            {
                if(j==0)
                {
                    cout<<setw(3)<<arr[i][j];
                }
                else
                {
                    cout<< " " << setw(3)<<arr[i][j];
                }
               
            }
            cout<<endl;
           }
            cout<<endl;
       }
       
    }
    
}