class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> mp;
        for(int i=0;i<candyType.size();i++)mp[candyType[i]]++;
        int n=mp.size();
        int ceat=candyType.size()/2;
        return min(n,ceat);
    }
};