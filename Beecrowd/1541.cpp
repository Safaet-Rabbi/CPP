#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==0&&b==0&&c==0)
        {
            break;
        }
        int landsize=sqrt((a*b*100)/c);
        cout<<landsize<<endl;
    }

}
