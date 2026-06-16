class Solution {
public:
    int trap(vector<int>& height) {

        //tc= O(N) SC: O(2N). for sc we can reduce by removing the prefix as one pointer can be made that remembers the last max. but still sc is O(N)
        // int n= height.size();
        // vector<int>prefix(n,0);
        // vector<int>suffix(n,0);
        // prefix[0]=height[0];
        // suffix[n-1]= height[n-1];

        // for(int i=1; i<n; i++){
        //     prefix[i]= max(prefix[i-1], height[i]);
        //     suffix[n-i-1]= max(suffix[n-i], height[n-i-1]);
        // }

        // int ans=0;
        // for(int i=0; i<n; i++){
        //     if(height[i]<prefix[i] && height[i]<suffix[i]){
        //         ans+=min(prefix[i], suffix[i])-height[i];
        //     }
        // }
        // return ans;


        //tc: O(N) sc:O(1)
        int ans=0;
        int n= height.size();
        int l=0, r=n-1;
        int lmax=0, rmax=0;

        while(l<r){
            if(height[l]<=height[r]){
                if(lmax>height[l]){
                    ans+=lmax-height[l];
                }
                else lmax= height[l];
                l++;
            }
            else{
                if(rmax>height[r]){
                    ans+=rmax-height[r];
                }
                else rmax=height[r];
                r--;
            }
        }
        return ans;
    }
};
