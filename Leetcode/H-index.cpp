#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& arr) {
        sort(arr.rbegin() , arr.rend());
      
        int n = arr.size();
        if(arr[0]==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        
        // int ans=0;
        int count = 1;
        int ans = 0;
        for(int i =0; i<n; i++)
        {
            if(arr[i]<=count){
                ans=max(ans,arr[i]);
                break;
            }
            ans=max(ans,count);
            count++;
        }
      return ans;
    }
};
