class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        int l=0;
        int r=n-1;
        while(l<r){
            int x=nums[l];
            int y=nums[r];
            if(x+y==target){
                ans.push_back(l+1);
                ans.push_back(r+1);
                break;
            }
            else if(x+y>target){
                r--;
            }
            else{
                l++;
            }
        }
        return ans;
        
        
    }
};
