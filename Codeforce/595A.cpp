#include<iostream>
#include<vector>
using namespace std;
int main() {

    int n,m,i,j;
    int count = 0;
    cin >> n >> m;

    for(i=0;i<n;i++) {
        for ( j = 0; j <m; j++)
        {
            char Windows1, windows2;
            cin>>Windows1 >> windows2;
            if(Windows1=='1' || windows2=='1') {
                count++;
            }
        }
        
    }
    cout << count <<endl;
    
} 
