class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int cnt = 0;
       sort(arr.begin(),arr.end());
       for(int i=0;i<arr.size();i++){
        if(arr[i] == 0){
            cnt++;
        }if(cnt == 2) return true;
        if(arr[i] == 0) continue;
        int check = arr[i]*2;
        int low = 0, high = arr.size()-1;
            while(low <= high){
                int mid = low + (high - low)/2;
                if(arr[mid] == check) return true;
                else if(arr[mid] > check) high = mid -1;
                else low = mid +1;
       }
       }
       return false;
    }
};