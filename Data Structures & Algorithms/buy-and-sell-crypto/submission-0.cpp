class Solution {
public:
    int maxProfit(vector<int>& pr) {
        int ans=0;
        int n=pr.size();
        int maxi=pr[n-1];
        for(int i=n-2;i>=0;i--){
            ans=max(ans,maxi-pr[i]);
            maxi=max(maxi,pr[i]);
        }
        return ans;
    }
};
