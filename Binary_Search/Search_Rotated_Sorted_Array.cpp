class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0, e=nums.size()-1;
        while(s<=e){
            int mid= s+(e-s)/2;
            if(nums[mid]==target)return mid;

            //Check if left array is sorted and target lies in that range
            if(nums[s]<=nums[mid]){
                if(nums[s]<=target && target < nums[mid]) e= mid-1;
                else s= mid+1;
            }

            //checks if right array is sorted and target lies there
            else{
                if(nums[mid]<target && target<=nums[e]) s= mid+1;
                else e= mid-1;
            }
        }
        return -1;
    }
};
