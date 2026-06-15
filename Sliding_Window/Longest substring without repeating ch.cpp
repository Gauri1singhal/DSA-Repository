class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int len=0;
        // int maxi=0;
        // for(int i=0; i<s.length(); i++){
        //     int hash[255]= {0};
        //     for(int j=i; j<s.length(); j++){
        //         if(hash[s[j]]==1)break;
        //         len= j-i+1;
        //         maxi= max(len, maxi);
        //         hash[s[j]]=1;
        //     }
        // }
        // return maxi;

        unordered_map<char, int>mp;
        int res=0;
        int left=0;
        for(int right=0; right<s.length(); right++){
            if(mp.find(s[right])!=mp.end()){
                left= max(left, mp[s[right]]+1);
            }
            mp[s[right]]=right;
            res= max(res, right-left+1);
        }
        return res;
    }
};
