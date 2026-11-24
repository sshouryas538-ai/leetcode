class Solution {
public:
    int strStr(string haystack, string needle) {
        // int ans = -1;
        int n = needle.size();
        for(int i=0;i<haystack.size();i++){
            if(haystack[i] == needle[0]){
                int check = 0;
                while(check < n && haystack[i+check] == needle[check]){
                    if(check == n-1) return i;
                    check++;
                }
                check = 0;
            }
        }
        return -1;
    }
};