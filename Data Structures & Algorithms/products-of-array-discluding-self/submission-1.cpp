class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n=nums.size();
        int cnt=0;
        int it=-1;
        int prod=1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                it=i;
                cnt++;
            }
            else{
                prod*=nums[i];
            }
        }
        vector<int> ans(n,0);
        if(cnt==0){
            for(int i=0;i<n;i++){
                ans[i]=prod/nums[i];
            }

        }
        else if(cnt==1){
            ans[it]=prod;

        }
        return ans;





    }
};
