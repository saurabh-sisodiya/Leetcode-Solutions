/*
35. Search Insert Position
https://leetcode.com/problems/search-insert-position/description/
*/

/* Brute Force Approach TC - O(n) */
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==target){
                return i;
            }else if(nums[i]>target){
                return i;
            }else if(nums[n-1]<target){
                return n;
            }
        }
        return 0;
    }
};

/* Optimal Approach TC - O(log n) */
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;
        int ans = n;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]>=target){
                ans = mid;
                high = mid - 1;
            }else if(nums[mid]<=target){
                low = mid + 1;
            }
        }
        return ans;
    }
};