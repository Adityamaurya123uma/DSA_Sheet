class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>out(n);
        
        // Space complexity : O(n)
        out[n-1]=1;
        for(int i=n-2;i>=0;i--){
            out[i]=out[i+1]*nums[i+1];
        }
        int prefix=1;
        for(int i=1;i<n;i++){
            prefix=prefix*nums[i-1];
            out[i]=prefix*out[i];
        }
        
        // Space Complexity: O(n)+O(n)+O(n);
        // vector<int> prefix(n);
        // prefix[0]=1;
        // for(int i=1;i<n;i++){
        //     prefix[i]=prefix[i-1]*nums[i-1];
        // }
        // vector<int> suffix(n);
        // suffix[n-1]=1;
        // for(int i=n-2;i>=0;i--){
        //     suffix[i]=suffix[i+1]*nums[i+1];
        // }
        // for(int i=0;i<n;i++){
        //     out[i]=prefix[i]*suffix[i];
        // }
         return out;
    }
};