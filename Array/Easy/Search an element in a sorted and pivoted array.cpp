// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int search(int a[], int l, int h, int target){
    //complete the function here
     while(l<=h)
   {
      int mid=(l+h)/2;
      
      if(a[mid]==target)
      {
          return mid;
      }
      
      if(a[l]<=a[mid])
      {
          if(a[l]<=target && target<a[mid]){
              h=mid-1;
          }
          else{
              l=mid+1;
          }
      }
      else{
          if(a[mid]<=target && target<a[l]){
              l=mid+1;
          }
          else{
              h=mid-1;
          }
      }
      
     
   }
   return -1;
    
    }
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends