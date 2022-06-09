    class Solution {
public:
    int lengthOfLongestSubstring(string s) {
//         set<char>Set;
//         int Max = 0;
//         int start=0;
//         int end=0;
        
//         while(start<s.size()){
//             auto it = Set.find(s[start]);
//             if(it==Set.end()){
//                 if(start-end+1>Max){
//                     Max=start-end+1;
//                 }
//                 Set.insert(s[start]);
//                 start++;
//             }
            
//             else
//             {
//                 Set.erase(s[end]);
//                 end++;
//             }
//         }
        
//         return Max;
        
        vector<int> mpp(256,-1);
        
        int left=0;
        int right=0;
        int n=s.size();
        int len=0;
        while(right<n)
        {
            if(mpp[s[right]]!= -1)
                left=max(mpp[s[right]]+1,left);
            
            mpp[s[right]]=right;
            len=max(len,right-left+1);
            right++;
        }
        return len;
    }
};