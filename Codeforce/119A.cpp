#include<iostream>
using namespace std;
int main()
{
    int a,b,n,i;
    cin>>a>>b>>n;
    bool simonTurn=true;
    while(n>0)
    {
        if(simonTurn)
        {
            int stonesTaken =0;
            for(i=1;i<=n;i++)
            {
                if(a%i==0 && n%i==0)
                {
                    stonesTaken=i;
                }
            }
            if(stonesTaken>n)
            {
                cout<< "1" <<endl;
                return 0;
            }
            n -=stonesTaken;
        }
        else
        {
            int stoneTaken=0;
            for(i=1;i<=n;i++)
            {
                if(b%i==0 && n%i==0)
                {
                    stoneTaken=i;
                }
            }
            if(stoneTaken>n)
            {
                cout<< "0"<<endl;
                return 0;
            }
            n-=stoneTaken;
        }
        simonTurn=!simonTurn;
    }
    cout<< (simonTurn? "1" : "0" ) << endl;
}
