class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int p = nums1.size();
       int q = nums2.size();
       int n = p+q;
        int check1 = (n/2)-1;
        int check2 = (n/2)+1;
       double ele1 = -1,ele2 = -1;
       int i=0,j=0,cnt=0;
       while(cnt<check2){
        if(j<q &&(i>=p ||nums1[i]>=nums2[j])){
            ele2 = ele1;
            ele1 = nums2[j];
            j++;
        }
        else {
            ele2 = ele1;
            ele1 = nums1[i];
            i++;
        }
        cnt++;
        if(cnt == check2) break;
       }
       if(n%2 == 0){
        return (ele1 + ele2)/2;
       }
       else{
        return ele1;
       }
    }
};