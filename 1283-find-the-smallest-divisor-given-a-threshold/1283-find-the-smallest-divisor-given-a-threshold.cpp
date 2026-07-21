class Solution {
public:
    bool satisfy(vector<int>& num, int th, int d) {
    long long sum =0;
    for (int x : num) {
        sum += (x+d-1)/d;

        if(sum>th) return false;
    }
    return true;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
      int low=1,high=*max_element(nums.begin(),nums.end());
      int smd=-1;
      while(low<=high){
        int mid=low+(high-low)/2;
        if(satisfy(nums,threshold,mid)){
            smd=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
      }
      return smd;
    }
};