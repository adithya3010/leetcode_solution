class Solution {
public:
    int thirdMax(vector<int>& nums) {
     if(nums.size()<3){
        if(nums.size()==2) return max(nums[0],nums[1]);
        if(nums.size()==1) return nums[0];
     }
     long long fm=LLONG_MIN,sm=LLONG_MIN,tm=LLONG_MIN;
     for(int i=0;i<nums.size();i++){
        if(fm==nums[i]||sm==nums[i]||tm==nums[i])continue;
        if(fm<nums[i]){
            tm=sm;
            sm=fm;
            fm=nums[i];
        }else if(sm<nums[i]){
            tm=sm;
            sm=nums[i];
        }else if(tm<nums[i]){
            tm=nums[i];
        }        
     }
     if(tm == LLONG_MIN)return fm;
     return tm;
    }
};