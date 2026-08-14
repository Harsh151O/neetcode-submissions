class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp;
        mp[nums[0]]=0;
        vector<int> ans;
        for(int i=1; i<nums.size(); i++)
        {
            int n = target - nums[i];
            if(mp.find(n)!=mp.end())
            {
                ans.push_back(mp[n]);
                ans.push_back(i);
                break;
            }
            else 
            {
                mp[nums[i]]=i;
            }
        }
        return ans;
    }
};
