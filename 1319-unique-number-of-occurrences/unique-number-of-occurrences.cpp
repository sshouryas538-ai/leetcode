class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mpp;
        for(auto it:arr)mpp[it]++;
        set<int>st;
        for(auto it:mpp){
            if(st.find(it.second) != st.end()) return false;
            else st.insert(it.second);
        }
        return true;
    }
};