#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = (n1 + n2);
        int cnt = 0; // index tracker
        int ind2 = n / 2;
        int ind1 = ind2 - 1;
        int ind1el = -1;
        int ind2el = -1;
        int i = 0;
        int j = 0;

        while (i < n1 && j < n2) {
            if (nums1[i] <= nums2[j]) {
                if (cnt == ind1) ind1el = nums1[i];
                if (cnt == ind2) ind2el = nums1[i];
                cnt++;
                i++;
            }
            else {
                if (cnt == ind1) ind1el = nums2[j];
                if (cnt == ind2) ind2el = nums2[j];
                cnt++;
                j++;
            }
        }

        while (i < n1) {
            if (cnt == ind1) ind1el = nums1[i];
            if (cnt == ind2) ind2el = nums1[i];
            cnt++;
            i++;
        }

        while (j < n2) {
            if (cnt == ind1) ind1el = nums2[j];
            if (cnt == ind2) ind2el = nums2[j];
            cnt++;
            j++;
        }

        if (n % 2 == 1) {
            return ind2el;
        }

        return static_cast<double>((static_cast<double>(ind1el + ind2el)) / 2.0);
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << solution.findMedianSortedArrays(nums1, nums2) << endl;  // Output: 2.0

    nums1 = {1, 2};
    nums2 = {3, 4};
    cout << solution.findMedianSortedArrays(nums1, nums2) << endl;  // Output: 2.5

    return 0;
}
