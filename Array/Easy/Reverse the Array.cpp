#include <iostream>
using namespace std;

int main()
{
    int tC=0;
    cin>>tC;
    
    while(tC>0)
    {
        int len=0;
        cin>>len;
        int arr[len];
        
        for(int i=0; i<len; i++)
        {
            cin>>arr[i];
        }
        
        for(int i=len-1; i>=0; i--)
        {
            cout<<arr[i]<<" ";
        }
        
        cout<<endl;
        tC--;
    }
    
    return 0;
}