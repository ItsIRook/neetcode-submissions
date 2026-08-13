class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int n:nums){
            s.insert(n);
        }
        int count=0;
        for(int n:s){
            if(!s.contains(n-1)){
                int len=1;
                while(s.contains(n+len)){
                    len++;
                }
                if(count<len) count=len;
            }
        }
        return count;
    }
};
