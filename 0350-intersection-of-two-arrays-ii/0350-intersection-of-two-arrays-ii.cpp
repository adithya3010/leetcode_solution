class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      
       if(nums1.size()==0||nums2.size()==0)return {};
       unordered_map <int,int> mp;
       vector<int> ans;
       if(nums1.size() > nums2.size()) swap(nums1, nums2);
       for(int i=0;i<nums1.size();i++){
        mp[nums1[i]]++;
       }
       for(int i=0;i<nums2.size();i++){
        if(mp[nums2[i]]>0){
            ans.push_back(nums2[i]);
            mp[nums2[i]]--;
          }
       }
       return ans;
    }
};
