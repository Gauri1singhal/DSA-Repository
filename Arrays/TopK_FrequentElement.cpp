class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // if(k==nums.size())return nums;

        // unordered_map<int, int>mp;
        // for(int i=0; i<nums.size(); i++){
        //     mp[nums[i]]++;
        // }
        // vector<int>ans;
        // for(int i=0; i<k; i++){
        //     int MaxFreq= INT_MIN;
        //     int num=0;

        //     for(auto m:mp){
        //         if(m.second>MaxFreq){
        //             MaxFreq= m.second;
        //             num= m.first;
        //         }
        //     }
        //     ans.push_back(num);
        //     mp.erase(num);
        // }
        // return ans;



        //using max heap as it is about 'top' question with TC: O(Nlog(N))
        // if(k==nums.size())return nums;

        // unordered_map<int, int>mp;
        // for(int i=0; i<nums.size(); i++){
        //     mp[nums[i]]++;
        // }
        // vector<int>ans;

        // priority_queue<pair<int, int>>pq;
        // for( auto [num, count]:mp){
        //     pq.push({count, num});
        // }

        // while(k>0 && !pq.empty()){
        //     ans.push_back(pq.top().second);
        //     pq.pop();
        //     k--;
        // }
        // return ans;

        //using bucket method which is storing the num as per the count TC:O(N)
        if(k==nums.size())return nums;

        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        vector<int>ans;
        int n= nums.size();
        vector<vector<int>>bucket(n+1);

        for(auto [num, count]:mp){
            bucket[count].push_back(num);
        }
        for(int i=n; i>=0 && ans.size()<k; i--){
            for(int num: bucket[i]){
                ans.push_back(num);
                if(ans.size()==k)break;
            }
        }

        return ans;
    }
};