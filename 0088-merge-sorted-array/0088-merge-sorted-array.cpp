class Solution {
public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int x=m-1,y=n-1;
      for(int i=m+n-1;i>=0;i--){
          if(y<0){
               break;
           }
          if(x<0){
              nums1[i]=nums2[y];
              y--;
          }
       else if(nums1[x]<=nums2[y]){
           nums1[i]=nums2[y];
           y--;
           
       }
          else{
              nums1[i]=nums1[x];
              x--;
          }
      }
     
  }
};