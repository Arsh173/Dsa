class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for(int j = 0; j<n; j++) {
            int required = target - nums[j];

            if(mp.find(required) != mp.end()) {
                return {mp[required], j};
            }
            else {
                mp[nums[j]] = j;

            }
        }
        return {};
    }
};