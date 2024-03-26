#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int result= floor(1.4);
    int res = ceil(2.4);
    int power = pow(2,3);
    cout<<"result= "<<result<<endl;
    cout<<"res= "<<res<<endl;
    cout<<"Power = "<<power<<endl;
    int radius;
    cout<<"Enter radius = ";
    cin>>radius;
   float pi=3.1416;
    cout<<"Area of circle = "<<pi*pow(radius,2)<<endl;
}