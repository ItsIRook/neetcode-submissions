class Solution {
public:
    int maxArea(vector<int>& heights) {
        set<int> area; int l=0, r=heights.size()-1;
        while(l<r){
            if(heights[l]<heights[r]){
                area.insert(heights[l]*(r-l));
                l++;
            }       
            else{
                area.insert(heights[r]*(r-l));
                r--;
            }
        }
        auto it = area.rbegin();
        return *it;                                                                     
    }
};
