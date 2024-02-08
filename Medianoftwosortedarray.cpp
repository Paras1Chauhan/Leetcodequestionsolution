class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {   
       int m=nums1.size();
        int n=nums2.size();
      //  int s=m+n;
        vector<int>ans(m+n,0);
        int i=0,j=0;
        int inx=-1;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                ans[++inx]=nums1[i++];
            }
            else{
                ans[++inx]=nums2[j++];
               
            }
        }
        while(i<m)ans[++inx]=nums1[i++];
        while(j<n)ans[++inx]=nums2[j++];
       // sort(ans.begin(),ans.end());
        int s=m+n;
       //
        //return s%2?ans[s/2]:(ans[s/2]+ans[s/2-1])/2.0;
        if(s%2!=0){
            return ans[s/2];
        }
        else{
            return (ans[s/2]+ans[s/2-1])/2.0;
        }
        
        
    }
};