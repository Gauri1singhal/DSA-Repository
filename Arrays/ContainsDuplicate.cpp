class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_map<int, int>mp;
        // for(int i=0; i<nums.size(); i++){
        //     if(mp.find(nums[i])!= mp.end())return true;
        //     else mp[nums[i]]++;
        // }
        // return false;

        unordered_set<int>s;
        for(int i=0; i<nums.size(); i++){
            if(s.find(nums[i])!=s.end())return true;
            s.insert(nums[i]);
        }
        return false;
    }
};