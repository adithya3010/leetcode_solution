class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }
        vector<pair<int, char>> v;
        for (auto &it : freq) {
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end(), [](pair<int, char> a, pair<int, char> b) {
            return a.first > b.first;
        });
        string ans;
        for (auto &p : v) {
            ans.append(p.first, p.second);
        }
        return ans;
    }
};