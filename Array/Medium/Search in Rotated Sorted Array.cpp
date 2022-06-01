class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size()-1,mid;
        while(lo<=hi)
        {
            mid = lo+((hi-lo)>>1);
            if(nums[mid]==target) return mid;
            if(nums[lo]<=nums[mid]) //if the pivot does NOT lie between lo and mid
            {
                if(target>=nums[lo] && target<nums[mid]) hi = mid-1; //if target lies between lo and mid
                else lo = mid+1;
            }
            else //if the pivot lies between lo and mid
            {
                if(target>nums[mid] && target<=nums[hi]) lo = mid+1; //if target lies between mid and hi
                else hi = mid-1;
            }
        }
        return -1;
        
    }
};