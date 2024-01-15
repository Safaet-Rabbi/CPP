#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a,int b){
    if (b==0)
    {
         return a;
    }
    return (b,a%b);
    
}

int main(){
    int y,w;
    cin>>y>>w;
    int maxres = max(y,w);
    int chance = 6-maxres+1;

    int gcdValue = gcd(chance,6);
    int numerator = chance/gcdValue;
    int denominator = 6/gcdValue;

    cout<<numerator<<"/"<<denominator<<endl;
}
