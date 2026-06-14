class Solution {
public:
    // bool ls(vector<int>& nums, int temp){
    //     for(int i=0; i<nums.size(); i++){
    //         if(nums[i]==temp)return true;
    //     }
    //     return false;
    // }
    int longestConsecutive(vector<int>& nums) {
        // if(nums.size()==0)return 0;
        // int ans=1;
        // for(int i=0; i<nums.size(); i++){
        //     int num= nums[i]+1;
        //     int count=1;
        //     while(ls(nums, num)==true){
        //         num++;
        //         count++;
        //     }
        //     ans= max(ans, count);
        // }
        // return ans;


        // if(nums.size()==0)return 0;
        // sort(nums.begin(), nums.end());
        
        // int ans=1;
        // int curr=0;
        // int last= INT_MIN;

        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]-1==last){
        //         curr+=1;
        //         last= nums[i];
        //     }
        //     else if(last!=nums[i]){
        //         curr=1;
        //         last=nums[i];
        //     }
        //     ans= max(ans, curr);
        // }
        // return ans;



        if(nums.size()==0)return 0;
        unordered_set<int>s;
        for(auto &num:nums)s.insert(num);
        int count=0;
        int ans=1;

        for(auto it:s){
            if(s.find(it-1)==s.end()){
                count=1;
                int x=it;
                while(s.find(x+1) !=s.end()){
                    x= x+1;
                    count=count+1;
                }
                ans= max(ans, count);
            }
        }
        return ans;

    }
};
