class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int high = arr.size(), low = 1;
        for(int i=0;i<arr.size();i++){
            while(arr[i]>=low && arr[i]<=high && arr[arr[i]-1] != arr[i]){
                int check = arr[i] - 1;
                swap(arr[i],arr[check]);
            }
        }
        int ans = 1;
        for(int i=0;i<arr.size();i++){
            if(ans != arr[i]) return ans;
            else{
                ans++;
            }
        }
        return ans;
    }
};