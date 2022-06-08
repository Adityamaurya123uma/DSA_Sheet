class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count=0;
        int minlen=INT_MAX;
        string tempstr="";
        
        for(int i=0;i<strs.size();i++)
        {
            if(strs[i].length()<minlen)
            {
                minlen=strs[i].length();
                tempstr=strs[i];
            }
        }
        
        for(int i=0;i<minlen;i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=tempstr[i])
                {
                    return tempstr.substr(0,count);
                }
            }
            count++;
        }
        
        return tempstr.substr(0,count);
    }
};
