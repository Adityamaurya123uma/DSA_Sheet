class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        
        int freqs[26]={0};
        int freqt[26]={0};
        
        for(char ch:s) freqs[ch - 'a']++;
        for(char ch:t) freqt[ch - 'a']++;
        
        for(int i=0;i<26;i++)
        {
            if(freqs[i]!=freqt[i])
                return false;
        }
        
       return true;
    }
};