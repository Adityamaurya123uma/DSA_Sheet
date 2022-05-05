class Solution{
    public:
    int search(int a[], int l, int h, int key){
    //complete the function here
     while(l<=h)
   {
      int mid=(l+h)/2;
      if(a[mid]==key)
      return mid;
      if(a[l]<=a[mid] && a[mid]>=a[h])
      {
          if(key>=a[l] && key<a[mid])
          h=mid-1;
          else
          l=mid+1;
      }
      else
      {
          if(key>a[mid] && key<=a[h])
          l=mid+1;
          else
          h=mid-1;
      }
   }
   return -1;
    
    }
};