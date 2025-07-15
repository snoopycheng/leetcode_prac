#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;


        while(left <= right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target){
                return mid;
            }

            else if(nums[mid] < target){
                left = mid + 1;
            }
            
            else {
                right = mid - 1;
            }
        }

        return left;
    }
};

int main(){


    vector<int> nums = {1, 3, 5, 6};
    int target1 = 5; // ex1
    int ans1;
    int target2 = 2; // ex2
    int ans2;
    int target3 = 7; // ex3
    int ans3;

    Solution sol;
    ans1 = sol.searchInsert(nums, target1);
    cout << ans1 << endl;

    ans2 = sol.searchInsert(nums, target2);
    cout << ans2 << endl;

    ans3 = sol.searchInsert(nums, target3);
    cout << ans3 << endl;


    return 0;
}