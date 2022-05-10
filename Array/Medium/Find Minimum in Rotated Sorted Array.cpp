// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    int search(int arr[],int l,int r){
        if(l==r) return arr[l];
        int mid = l+(r-l)/2;
        if(arr[mid]>arr[r]) return search(arr,mid+1,r);
        if(arr[mid]<arr[r]) return search(arr,l,mid);
        return arr[r];
    }
public:
    int findMin(int arr[], int n){
        //complete the function here
        return search(arr,0,n-1);
    }
};

// { Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}  // } Driver Code Ends