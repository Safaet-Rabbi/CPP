#include<iostream>
using namespace std;
int main() {
    int a,b,DifferentDays,RedSocksRemain,BlueSocksRemain;
    cin >> a >>b;
    DifferentDays = min(a,b);
    RedSocksRemain = a - DifferentDays;
    BlueSocksRemain = b - DifferentDays;

    int SameDays =( RedSocksRemain + BlueSocksRemain) /2 ;

    cout << DifferentDays << " " << SameDays<< endl;
} 
