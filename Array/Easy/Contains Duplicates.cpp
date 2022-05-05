class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        int curnum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==curnum){
                return true;
            }
            else{
                curnum=nums[i];
            }
        }
        
        return false;
}};