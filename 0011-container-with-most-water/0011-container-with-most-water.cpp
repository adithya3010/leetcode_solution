class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size()<=1)return 0;
        int maxProd=0;
        int i=0,j=height.size()-1;
        while(i<j){
               maxProd=max(maxProd,min(height[j],height[i])*(j-i));
            if(height[i]<height[j]){ 
                i++;
            }else{
                j--;
            }
        }
       
        return maxProd;
    }
};