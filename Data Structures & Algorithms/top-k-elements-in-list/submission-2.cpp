class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int n:nums){
            m[n]++;
        }
        multimap<int,int> r;
        for(auto &[key,value]:m){
            r.insert({value,key});
        }
        vector<int> top;
        auto it=r.rbegin();
        while(k!=0){
            top.push_back(it->second);
            it++;
            k--;
        }
        return top;
    }
};
