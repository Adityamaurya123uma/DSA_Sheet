// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         vector<vector<int>> res;
        if(intervals.size()==0){
            return res;
        }
        
        sort(intervals.begin(),intervals.end(),[](vector<int> &a, vector<int> &b){
            return a[0]<b[0];
        });
            
        vector<int> curr=intervals[0];
        
        for(int i=1;i<intervals.size();i++){
            if(curr[1]<intervals[i][0]){
                res.push_back(curr);
                curr=intervals[i];
            }else{
                curr[1]=max(curr[1],intervals[i][1]);
            }
        }
        
        res.push_back(curr);
        return res;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends