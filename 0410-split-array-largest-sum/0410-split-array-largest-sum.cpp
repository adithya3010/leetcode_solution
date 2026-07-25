class Solution {
public:
  bool canSplit(vector<int>& arr, int mid, int k) {
    int cnt = 1; 
    long long sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > mid)
            return false;
        if (sum + arr[i] > mid) {
            cnt++;
            sum = arr[i];
        } else {
            sum += arr[i];
        }
    }
    return cnt <= k;
}
    int splitArray(vector<int>& nums, int k) {
       long long high=0;
       int low=*min_element(nums.begin(),nums.end()),res=-1;
       for(int i=0;i<nums.size();i++){
        high+=nums[i];
       }
       while(low<=high){
          int mid=low+(high-low)/2;
          if(canSplit(nums,mid,k)){
            res=mid;
            high=mid-1;
          }else{
            low=mid+1;
          }
       }   
     return res;
    }
};