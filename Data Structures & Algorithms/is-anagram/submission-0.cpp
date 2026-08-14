class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> s1(26,0);
        vector <int> t1(26,0);

        if(s.length() != t.length()){return false;}

        for(int i=0; i<s.length(); i++)
        {
            s1[s[i]-'a']++;
            t1[t[i]-'a']++;
        }

        for(int i=0; i<26; i++)
        {
            if(s1[i]!=t1[i])
            {
                return false;
            }
        }
        return true;
    }
};
