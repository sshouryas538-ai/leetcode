class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int check = target;
        char ans = letters[0];
        int low = 0, high = letters.size()-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            int soo = letters[mid];
            if(soo > check){
                ans = letters[mid];
                high = mid -1;
            }else low = mid +1; 
        }
        return ans;
    }
};