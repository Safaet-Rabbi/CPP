#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int comparestr(const string& str1,const string& str2)
{
    int n=str1.length();
    for(int i=0;i<n;i++)
    {
        char ch1 = tolower(str1[i]);
        char ch2 = tolower(str2[i]);
        if(ch1<ch2)
        {
            return -1;
        }
        else if(ch1>ch2)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int result=comparestr(str1,str2);
    cout<<result<<endl;
}
