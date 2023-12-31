#include<iostream>
using namespace std;
bool isPrime(int num)
{
    if(num<2)
    {
        return false;
    }
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int getnxt(int num)
{
    int nextNum=num+1;
    while(!isPrime(nextNum))
    {
        nextNum++;
    }
    return nextNum;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int nextPrime=getnxt(n);
    if(m==nextPrime)
    {
        cout<< "YES" <<endl;
    }
    else
    {
        cout<< "NO" << endl;
    }
}
