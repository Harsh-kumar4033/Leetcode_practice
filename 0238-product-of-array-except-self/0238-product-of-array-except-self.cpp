class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n=nums.size();
       vector<int>ans(n,1);
       //vector<int>pre(n,1);
      // vector<int>suf(n,1);
    //    int prefix=1;
       for(int i=1; i<n; i++)
       {
         ans[i] = ans[i-1] * nums[i-1];

         //pre.push_back[prefix];
       }
       
       int suf=1;

       for(int a=n-2; a>=0; a--)
       {
          suf *= nums[a+1];
          ans[a]*=suf;
         //suf.push_back[suffix];
       }
       
    return ans;
    }
};