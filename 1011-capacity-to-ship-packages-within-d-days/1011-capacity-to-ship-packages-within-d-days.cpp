class Solution {
public:
   bool canShip(vector<int>& weights, int days, int capacity) {
    int daysUsed = 1;
    int currentWeight = 0;

    for (int weight : weights) {
        if (currentWeight + weight > capacity) {
            daysUsed++;
            currentWeight = weight;
        } else {
            currentWeight += weight;
        }
    }

    return daysUsed <= days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int minW=0,maxW=0;
        int minimumWeight=0;
        for(int i=0;i<weights.size();i++){
            minW=max(minW,weights[i]);
            maxW+=weights[i];
        }
        while(minW<=maxW){
            int mid=minW+(maxW-minW)/2;
            if(canShip(weights,days,mid)){
                minimumWeight=mid;
                maxW=mid-1;
            }else{
                minW=mid+1;
            }
        }
        return minimumWeight;
    }
};