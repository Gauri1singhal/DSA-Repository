class Solution {
public:

    string encode(string &s){
        vector<int>freq(26, 0);
        for(auto &ch: s){
            freq[ch-'a']++;
        }
        string res="";
        for(int i=0; i<26; i++){
            res+=(char)('a'+i) + to_string(freq[i]);
        }
        return res;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map<string, vector<string>>mp;
        // vector<vector<string>>ans;
        // for(int i=0; i<strs.size(); i++){
        //     string temp= strs[i];
        //     sort(temp.begin(), temp.end());
        //     mp[temp].push_back(strs[i]);
        // }
        // for(auto m:mp){
        //     ans.push_back(m.second);
        // }
        // return ans;

        unordered_map<string, vector<string>>mp;
        vector<vector<string>>ans;
        for(int i=0; i<strs.size(); i++){
            mp[encode(strs[i])].push_back(strs[i]);
        }
        for(auto m:mp){
            ans.push_back(m.second);
        }
        return ans;
        
    }
};