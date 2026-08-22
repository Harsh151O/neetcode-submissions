class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> ans;
        unordered_map <int,int> m;
        for(int i : nums)
        {
            m[i]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto [num,count] : m)
        {
            bucket[count].push_back(num);
        }

        for(int i=nums.size(); i>=0; i--)
        {
            for(int j=0; j<bucket[i].size(); j++)
            {
                k--;
                ans.push_back(bucket[i][j]);
                if(k==0){break;}
            }
             if(k==0){break;}
        }
        return ans;

    }
};
