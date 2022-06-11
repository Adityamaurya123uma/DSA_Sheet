class Solution {
public:
//     // solution 1: 
//     int countSubstrings(string s) {
//         int n=s.size();
//         int ans=0;
        
//         for(int i=0;i<n;i++){
//             int x=i-1,y=i+1;
//             ans++;
//             while(x>=0 and y<n and s[x]==s[y]){
//                 ans++;
//                 x--;
//                 y++;
//             }
//              x=i,y=i+1;
//             while(x>=0 and y<n and s[y]== s[x]){
//                 ans++;
//                 x--;
//                 y++;
//             }
//         }
//         return ans;
//     }
// };


// Soltuion 2 Using DP

 int countSubstrings(string s) {
        int n=s.size();
        //bool dp[n+1][n+1];
   // or we can take 
     vector<vector<bool>>dp(n+1,vector<bool>(n+1)); 
        int count=0;
        for(int gap=0;gap<n;gap++){
            for(int i=0,j=gap;j<n;i++,j++){
                if(gap==0){//gap 0 means only one element
                    dp[i][j]=true;//a single element always palindrome
                }
                else if(gap==1){ //means two char only 
                    if(s[i]==s[j]){
                        dp[i][j]=true;
                    }else{
                        dp[i][j]=false;
                    }
                }
                else{  //many element present
                    if(s[i]==s[j] && dp[i+1][j-1]==true){ //check only first and last element for palindrome because dp[i+1][j-1]will check there middle element are palindromic or not
                        dp[i][j]=true;
                    }else{
                        dp[i][j]=false;
                    }
                }
                if(dp[i][j]==true){
                    count++;
                }
            }
        }
        return count;
    }
};