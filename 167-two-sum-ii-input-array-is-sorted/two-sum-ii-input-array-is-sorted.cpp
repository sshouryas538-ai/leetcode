class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size()-1;i++){
            int check = target - numbers[i];
            int low = i+1, high = numbers.size()-1;
            while(low<=high){
                int mid = low + (high - low)/2;
                if(numbers[mid] == check){
                    return {i+1,mid+1};
                }
                else if(numbers[mid]<check) low = mid +1;
                else high = mid -1;
            }
        }
        return {};
    }
};