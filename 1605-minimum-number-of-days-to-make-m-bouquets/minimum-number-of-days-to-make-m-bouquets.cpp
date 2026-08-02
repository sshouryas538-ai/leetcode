class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = bloomDay[0];
        int high = bloomDay[0];
        for(int i=1;i<bloomDay.size();i++){
            if(bloomDay[i]<low) low = bloomDay[i];
            if(bloomDay[i]>high) high = bloomDay[i];
        }
        if(bloomDay.size()<(long long)m*k) return -1;
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(m<=possible(bloomDay, m, k,mid)){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid +1;
            }
        }
        return ans;
    }
    int possible(vector<int>& bloomDay, int m, int k,int mid){
        int counter = 0;
        int maxB = 0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid) counter++;
            else{
                maxB += (counter/k);
                counter = 0;
            }
        }
        maxB += (counter/k);
        return maxB;
    }
};