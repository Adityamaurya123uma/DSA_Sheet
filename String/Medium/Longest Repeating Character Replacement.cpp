class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int n=s.size();
        int l=0;
        int r=0;
        int res=0;
        int maxCount=0;

        unordered_map<char, int> count;

        while(r<n)
        {
            count[s[r]]++;
            maxCount=max(maxCount,count[s[r]]);

            if(r-l+1 - maxCount > k)
            {
                count[s[l]]--;
                l++;
            }
            res=max(r-l+1,res);
            r++;
        }

        return res;
    }
};