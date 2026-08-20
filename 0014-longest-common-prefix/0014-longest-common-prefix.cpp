class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        
        string ans="";
        sort(strs.begin(),strs.end());

        string first=strs.front();
        string last=strs.back();
        int n=min(first.size(), last.size());

        for(int i=0; i<n; i++)
        {
            if(first[i] != last[i])
            {
                break;
            }
            ans += first[i];
        }
        return ans;
    }
};