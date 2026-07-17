class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(auto &customer : accounts){
            ans = max(ans,accumulate(customer.begin(),customer.end(),0));
        }
        return ans;
    }
};