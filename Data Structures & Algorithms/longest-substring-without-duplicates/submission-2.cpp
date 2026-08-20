class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0, l = 0;
        unordered_set<char> c;
        for(int r=0; r<s.size(); r++){
            while(c.contains(s[r])){
                c.erase(s[l]);
                l++;
            }
            c.insert(s[r]);
            len = max(len, r-l+1);
        }
        return len;
    }
};
