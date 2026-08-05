class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size()-1;
        int low = 1;
        int high = position[n]-position[0];
        int ans = 1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(possibleD(position,m,mid)){
                ans = mid;
                low = mid +1;
            }
            else{
                high = mid -1;
            }
        }
        return ans;
    }
    bool possibleD(vector<int>&position,int m,int mid){
        int filledP = position[0];
        int counter = 1;
        for(int i=0;i<position.size();i++){
            if(position[i]-filledP >= mid){
                counter++;
                filledP = position[i];
                if(counter >= m) return true;
            }
        }
        return counter>=m;
    }
};