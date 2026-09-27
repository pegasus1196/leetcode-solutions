class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos(n/2);
        int p=0;
        vector<int> neg(n/2);
        int q=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>0)
            {
                pos[p]=nums[i];
                p++;
            }
            if(nums[i]<0)
            {
                neg[q]=nums[i];
                q++;
            }
        }
        int i=0;
        int j=0;
        while(i<n-1)
        {
            nums[i]=pos[j];
            nums[i+1]=neg[j];
            j++;
            i+=2;
        }
        return nums;
    }
};