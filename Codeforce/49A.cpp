#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string question;
    int i;
    getline(cin,question);
    char lastLetter= ' ';
    for(i=question.length()-2;i>=0;i--)
    {
        if(!isspace(question[i]))
        {
            lastLetter=question[i];
            break;
        }
    }
    char answer=tolower(lastLetter);
    if(answer=='a'||answer=='e'||answer=='i'||answer=='o'||
    answer=='u'||answer=='y')
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}