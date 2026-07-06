class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int lg=INT_MIN,lgi=-1;
        for(int i=0;i<nums.size();i++){
            if(lg<nums[i]){
                lg=nums[i];
                lgi=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i==lgi){
                continue;
            }
            if(lg<2*nums[i])return -1;
        }
        return lgi;
    }
};