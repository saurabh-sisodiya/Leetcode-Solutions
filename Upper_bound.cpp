/*
Upper Bound
Given a sorted array of nums and an integer x, write a program to find the upper bound of x. The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than a given key i.e. x.
If no such index is found, return the size of the array.
*/
class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int n = nums.size();
        int ans = n;
        int low = 0;
        int high = n - 1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]<=x){
                low = mid + 1;
            }else if(nums[mid]>x){
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }
};