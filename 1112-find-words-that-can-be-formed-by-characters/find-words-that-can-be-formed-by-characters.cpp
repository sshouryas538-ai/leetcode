class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        multiset<char> temp;
        int ans = 0;

        for(char c : chars)
            temp.insert(c);

        for(string word : words) {
            bool check = true;
            multiset<char> st = temp;

            for(char c : word) {
                if(st.find(c) == st.end()) {
                    check = false;
                    break;
                }

                st.erase(st.find(c));
            }

            if(check)
                ans += word.size();
        }

        return ans;
    }
};