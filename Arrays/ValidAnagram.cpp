class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.length()!=t.length())return false;

        // unordered_map<int, int>mp;
        // for(int i=0; i<s.length(); i++){
        //     mp[s[i]]++;
        // }
        // for(int i=0; i<t.length(); i++){
        //     if(mp.find(t[i])==mp.end() || mp[t[i]]==0)return false;
        //     else mp[t[i]]--;
        // }
        // return true;

        if(s.length()!=t.length())return false;
        vector<int>freq(26, 0);

        for(char c:s){
            freq[c-'a']++;
        }
        for(char c:t){
            freq[c-'a']--;
        }
        for(int count:freq){
            if(count!=0)return false;
        }
        return true;


    }
};