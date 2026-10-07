class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        multiset<int>st;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                st.insert(matrix[i][j]);
            }
        }
        auto it = st.begin();
        for(int i=0;i<k-1;i++){
            it++;
        }
        return *it;
    }
};