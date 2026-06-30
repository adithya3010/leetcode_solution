class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()==0||nums2.size()==0)return {};
      unordered_set <int> st;
       unordered_set<int> st2;
       if(nums1.size() > nums2.size()) swap(nums1, nums2);
       for(int i=0;i<nums1.size();i++){
        st.insert(nums1[i]);
       }
       for(int i=0;i<nums2.size();i++){
        if(st.find(nums2[i])!=st.end()){
            st2.insert(nums2[i]);
         }
       }
       vector<int> ans(st2.begin(), st2.end());
       return ans;
    }
};