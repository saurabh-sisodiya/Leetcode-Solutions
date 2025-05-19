// 704. Binary Search
// https://leetcode.com/problems/binary-search/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int searchX(vector<int>& nums, int low, int high, int target){
        if(low>high) return -1;

        int mid = low + ((high - low)/2);
        if(nums[mid]==target){
            return mid;
        }else if(target>nums[mid]){
            return searchX(nums, mid+1, high, target);
        }
        return  searchX(nums, low, mid-1, target);
    }
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return searchX(nums, 0, n-1, target);
    }
};