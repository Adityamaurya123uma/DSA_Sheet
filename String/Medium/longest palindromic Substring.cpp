class Solution
{
public:
    //         int start=0;
    //         int end=0;

    //         for(int i=0;i<s.length();i++)
    //         {
    //             int len1=expandfromCenter(s,i,i+1);
    //             int len2=expandfromCenter(s,i,i);
    //             int len=max(len1,len2);

    //             if(end-start<len)
    //             {
    //                 start=i-(len-1)/2;
    //                 end=i+len/2;
    //             }
    //         }

    //         return s.substr(start,end+1);
    //     }

    //     int expandfromCenter(string s, int i,int j)
    //     {
    //         while(i>0 && j<s.length() && s.at(i)==s.at(j))
    //         {
    //             i--;
    //             j++;
    //         }

    //         return j-i-1;
    //     }
    void helper(int l, int r, int &cnt, string &s, string &res)
    {
        int size = 0;

        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            size = r - l + 1;
            l--;
            r++;
        }

        if (size > cnt)
        {
            cnt = size;
            res = s.substr(l + 1, size);
        }
    }
    string longestPalindrome(string s)
    {
        int cnt = 0;
        string res = "";

        for (int i = 0; i < s.size(); i++)
        {
            helper(i, i, cnt, s, res);
            helper(i, i + 1, cnt, s, res);
        }
        return res;
    }
};
