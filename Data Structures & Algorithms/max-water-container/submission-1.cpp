class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area=0; int l=0, r=heights.size()-1;
        while(l<r){
            if(heights[l]<heights[r]){
                if(area<heights[l]*(r-l)) area = heights[l]*(r-l);
                l++;
            }       
            else{
                if(area<heights[r]*(r-l)) area = heights[r]*(r-l);
                r--;
            }
        }
        return area;                                                                     
    }
};
