
pair<long long, long long> getMinMax(long long arr[], int n) {
    
    long long min =INT_MAX;
    long long max =INT_MIN;
    
    for(int i=0;i<n;i++){
        
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    
    return {min,max};
    
}
 


