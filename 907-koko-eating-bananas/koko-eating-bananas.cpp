class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxspeed(piles);
        int ans = high;
        while(low<=high){
            int mid = low + (high - low)/2;
            long long hours = totalhours(piles,mid);
            if(hours <= h) {
                high = mid -1;
                ans = mid;
            }
            else{
                low = mid +1;
            }
        }
        return ans;
    }
    long long totalhours(vector<int>& piles,int speed){
        long long totalhours = 0;
        for(int i=0;i<piles.size();i++){
            totalhours += (piles[i] + speed - 1)/speed;
        }
        return totalhours;
    }
    int maxspeed(vector<int>&piles){
        int max = 0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>max) max = piles[i];
        }
        return max;
    }
};