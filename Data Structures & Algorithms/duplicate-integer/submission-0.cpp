class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> daco;
        for (int n : nums) {
            if (daco.count(n) == 1) {
                return true;
            }
            else daco.insert(n);
        }
        return false;
    }
};