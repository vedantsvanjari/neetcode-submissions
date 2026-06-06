class Solution {
public:
    int maxArea(vector<int>& nums) {

        int n=nums.size();
        int ans=0;
        int l=0;
        int r=n-1;
        while(l<r){
            int ar=min(nums[l],nums[r])*(r-l);
            ans=max(ans,ar);
            if(nums[l]<nums[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return ans;
        
    }
};
