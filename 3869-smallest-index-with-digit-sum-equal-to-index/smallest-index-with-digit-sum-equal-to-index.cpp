class Solution {
public:
    int smallestIndex(vector<int>& nums) {
      for(int i=0;i<nums.size();i++){
        int temp = nums[i],check=0;
        while(temp > 0){
            check += temp%10;
            temp /= 10;
        }
        if(check == i) return i;
      }  
      return -1;
    }
};