class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n=nums.size();
        
        int ans=0;
        vector<int>ps(n,0);
        ps[0]=nums[0];
        for(int i=1; i<n; i++)
        {
           ps[i]= ps[i-1]+nums[i];
        }
        unordered_map<int,int>mp;

        for(int j=0; j<n; j++)
        {
            if(ps[j]==k){
                ans++;
            }
            int val = ps[j] - k;
            if(mp.find(val) != mp.end())
            {
                ans += mp[val];

            }
            if(mp.find(ps[j]) == mp.end())
            {
                mp[ps[j]] = 0;
            }
            mp[ps[j]]++;
        }
        return ans;
        
        // int count=0;
        // vector<int>ans;
        // for(int i=0; i<n; i++)
        // {
        //     int sum=0;
        //     for(int j=i; j<n;j++)
        //     {
        //         sum+=nums[j];
        //         if(sum == k) count++;
        //     }
        // }
        // return count;
    }
};