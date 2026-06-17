class Solution {
public:
    char processStr(string s, long long k) {
        //TLE
        // string res="";
        // for(int i=0; i<s.length(); i++){
        //     if(s[i]=='*'){
        //         //removes the last element
        //         if(res.length()>0)res.pop_back();
        //     }
        //     else if(s[i]=='#'){
        //         //duplicate the string
        //         res= res+res;
        //     }
        //     else if(s[i]=='%'){
        //         //reverse the result
        //         reverse(res.begin(), res.end());
        //     }
        //     else res+=s[i];
        // }
        // int n= res.length();
        // if(k>=n)return '.';
        // else return res[k];


        long long len = 0;
        for (auto c : s) {
            if (c == '*') {
                if (len) {
                    len--;
                }
            } else if (c == '#') {
                len *= 2;
            } else if (c == '%') {
                continue;
            } else {
                len++;
            }
        }
        if (k + 1 > len) {
            return '.';
        }
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '*') {
                len++;
            } else if (s[i] == '#') {
                if (k + 1 > (len + 1) / 2) {
                    k -= len / 2;
                }
                len = (len + 1) / 2;
            } else if (s[i] == '%') {
                k = len - k - 1;
            } else {
                if (k + 1 == len) {
                    return s[i];
                } else {
                    len--;
                }
            }
        }
        return '.';
    }
};
