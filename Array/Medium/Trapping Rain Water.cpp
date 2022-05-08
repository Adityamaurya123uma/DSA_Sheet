class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
         int left=0;
        int right=n-1;
        int leftbar=arr[0];
        int rightbar=arr[n-1];
        int ans=0;
        
        while(left<=right)
        {
            //limiting bar
            if(leftbar<rightbar)
            {
                if(arr[left]>leftbar)
                    leftbar=arr[left];
                else{
                    ans+=leftbar-arr[left];
                    left++;
                }
            }
            else
            {
                if(arr[right]>rightbar)
                    rightbar=arr[right];
                else{
                    ans+=rightbar-arr[right];
                    right--;
                }
            }
            
        }
        return ans;
    }
};