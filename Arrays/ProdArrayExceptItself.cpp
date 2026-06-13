class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int>ans(nums.size(), 1);
        // for(int i=0; i<nums.size(); i++){
        //     int prod=1;
        //     for(int j=0; j<nums.size(); j++){
        //         if(i!=j){
        //             prod= prod*nums[j];
        //         }
        //     }
        //     ans[i]= prod;
        // }
        // return ans;

        // vector<int>prefix(nums.size(),1);
        // vector<int>suffix(nums.size(), 1);

        // for(int i=1; i<nums.size(); i++){
        //     prefix[i]= prefix[i-1]*nums[i-1];
        // }
 
        // for(int i= nums.size()-2; i>=0; i--){
        //     suffix[i]= suffix[i+1]*nums[i+1];
        // }

        // vector<int>ans(nums.size(),1);
        // for(int i=0; i<nums.size(); i++){
        //     ans[i]= suffix[i]*prefix[i];
        // }

        // return ans;


        vector<int> ans(nums.size(), 1);

        for(int i=1; i<nums.size(); i++){
            ans[i] = ans[i-1] * nums[i-1];
        }

        int suffix = 1;

        for(int i=nums.size()-1; i>=0; i--){
            ans[i] *= suffix;
            suffix *= nums[i];
        }

        return ans;
    }
};