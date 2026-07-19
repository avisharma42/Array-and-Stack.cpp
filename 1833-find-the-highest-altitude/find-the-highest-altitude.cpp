class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx = 0;
        int altitude = 0;
        for(int i = 0; i<gain.size() ; i++){
            altitude += gain[i];
            mx = max(mx , altitude);
        }
        return mx;
    }
};