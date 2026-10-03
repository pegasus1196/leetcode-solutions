class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<vector<int>> temp;
        int i=0;
        int j=nums.size()-1;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)
        {
            temp.push_back({nums[i],i});
        }
        sort(temp.begin(), temp.end());
        while(i<j)
        {
            int a=temp[i][0]+temp[j][0];
            if(a<target)
            {
                i++;
            }
            else if(a>target)
            {
                j--;
            }
            else
            {
                ans.push_back(temp[i][1]);
                ans.push_back(temp[j][1]);
                break;
            }
        }
        return ans;
    }
};