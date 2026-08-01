class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int>dq;
        vector<int>ans;
        //1st win
        for(int i=0; i<k; i++)
        {
            while(dq.size()>0 && nums[dq.back()] <= nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        for(int i=k; i<n; i++)
        {
            ans.push_back(nums[dq.front()]);

            //remove that are not part of c.w.
            while(dq.size()>0 && dq.front() <= i-k)
            {
                dq.pop_front();
            }
            while(dq.size()>0 && nums[dq.back()] <= nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
            ans.push_back(nums[dq.front()]);
            
            return ans;







        // int p=0, q=p+k-1;
        
        // vector<int>ans;
        
        // while(q<n)
        // { 
        //     int maximum=INT_MIN;
        //     for(int i=p; i<=q; i++)
        //     {
                
        //         maximum=max(maximum,nums[i]);
                
                
        //     }
        //             ans.push_back(maximum);
        //         p++;
        //         q++;
         
        // }
        // return ans;
    }
};