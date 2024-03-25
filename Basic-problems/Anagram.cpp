#include<bits/stdc++.h>
using namespace std;

int sort (char word[])
{
    int len,temp;
    len=strlen(word);

    for(int i=0; i<len-1; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(word[i]>word[j])
            {
                temp=word[i];
                word[i]=word[j];
                word[j]=temp;
            }
        }
    }

}
int main()
{
    char str1[100],str2[100];
    cout<<"Enter First Word: ";
    cin>>str1;
    cout<<"Enter Second Word: ";
    cin>>str2;

    sort(str1);
    sort(str2);

    if(strcmp(str1,str2)==0)
        cout<<"String are Anagram.";
    else
        cout<<"String are not Anagram.";
    return 0;


}

