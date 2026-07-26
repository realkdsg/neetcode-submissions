class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> so;
        
        for (int i = 0; i < nums.size(); i++) {
            int conthieu = target - nums[i];
            if (so.count(conthieu)) {
                return {so[conthieu], i};
            }
            
            so[nums[i]] = i;

        }

    }
};
