class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int>st;
        int cnt = 0;
      for(auto it:arr){
        if(it == 0){
            cnt++;
        }
        if(cnt == 2) return true;
        if(it != 0) st.insert(it);
      }

      for(auto it:arr){
        int check = it*2;
        if(st.find(check) != st.end()) return true;
      }
      return false;
    }
};