class Solution {
public:
    int findMin(vector<int>& nums) {
        int minm=INT_MAX;
        for(int i=0;i<nums.size();i++){
           minm=min(minm,nums[i]);
        }
        return minm;
    }
};