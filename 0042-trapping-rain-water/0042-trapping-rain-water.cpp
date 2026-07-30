class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> lmax(n,0);
        vector<int> rmax(n,0);

        lmax[0]=height[0];
        rmax[n-1]=height[n-1];
        for(int i=1; i<n; i++)
        {
            lmax[i] = max(lmax[i-1],height[i]);
        }
        for(int j=n-2; j>=0; j--)
        {
            rmax[j] = max(rmax[j+1],height[j]);
        }

        int ans=0;
        for(int k=0; k<n; k++)
        {
            ans += min(lmax[k], rmax[k]) - height[k];
        }

return ans;





        
        // int max_capacity=0;
        // //int p=0, q=n-1;
        // if (n <= 2) return 0;
        // for(int i=1; i<n-1; i++)
        // {
        //     int lmax=0, rmax=0;
        //     for(int j=0; j<i;j++)
        //     {
        //         lmax=max(lmax,height[j]);
        //     }

        //     for(int q=n-1; q>i; q--)
        //     {
        //          rmax=max(rmax,height[q]);
                
        //     }

        //     int water = min(lmax, rmax) - height[i];
           
        //         max_capacity += max(0,water);
            
        // }
        // return max_capacity;
        
    }
};