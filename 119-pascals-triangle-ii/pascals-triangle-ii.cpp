class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        long long a=1;
        res.push_back(a);
    for(int i=1; i<=rowIndex; i++)
    {
        a=(a*(rowIndex-i+1))/i;
        res.push_back(a);
    }
    return res;
    }
};