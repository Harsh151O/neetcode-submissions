class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> m;
        for(int i=0; i<strs.size(); i++)
        {
            string temp = strs[i];
            vector <int> freq(26,0);
            for(char i : temp)
            {
                freq[i-'a']++;
            }
            m[freq].push_back(temp);
        } 
        vector<vector<string>> ans;
        for(auto i: m)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
