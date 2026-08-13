class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int k=0;
        map<int,int> m;
        for(int i:nums){
            if(m.contains(target-i)){
                return {m[target-i],k};
            }
            m[i] = k;
            k++;
        }
        return {};
    }
};
