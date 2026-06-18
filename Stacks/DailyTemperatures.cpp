class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //tle as O(N2)
        // vector<int>ans(temperatures.size(), 0);
        // for(int i=0; i<temperatures.size()-1; i++){
        //     int num= temperatures[i];
        //     int j=i+1;
        //     while(j < temperatures.size() && temperatures[j] <= temperatures[i]){
        //         j++;
        //     }
        //     if (j < temperatures.size()) {
        //         ans[i] = j - i;
        //     } else {
        //         ans[i] = 0;
        //     }
        // }
        // return ans;
    

        
        int n= temperatures.size();
        stack<int>st;
        vector<int>ans(n, 0);

        for(int i=n-1; i>=0; i--){
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]= st.top()-i;
            }
            else ans[i]=0;
            st.push(i);
        }
        return ans;
        
    }
};
