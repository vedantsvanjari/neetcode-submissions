class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0)return 0;
        int l=1;
        int ans=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]==1){
                l++;
                ans=max(ans,l);
            }
            else if(nums[i]-nums[i-1]==0){
                ans=max(ans,l);
            }
            else{
                l=1;
            }
        }
        return ans;
    }
};
