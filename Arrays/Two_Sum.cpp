class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for (int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[i]+nums[j]==target)return{i, j};
        //     }
        // }
        // return {-1, -1};

        // unordered_map<int, int>mp;
        // for(int i=0; i<nums.size(); i++){
        //     mp[nums[i]]=i;
        // }

        // for(int i=0; i<nums.size(); i++){
        //     int sum= target-nums[i];
        //     if(mp.find(sum)!= mp.end() && mp[sum]!=i){
        //         return {i, mp[sum]};
        //     }
        // }
        // return {-1, -1};

        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            int sum= target-nums[i];
            if(mp.find(sum)!=mp.end()){
                return {i, mp[sum]};
            }
            mp[nums[i]]=i;
        }
        
        return {-1, -1};
    }
};