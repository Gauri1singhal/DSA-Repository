class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //O(N2)
        // for(int i=0; i<matrix.size(); i++){
        //     for(int j=0; j<matrix[0].size(); j++){
        //         if(matrix[i][j]==target)return true;
        //     }
        // }
        // return false;


        int row=matrix.size();
        int col= matrix[0].size();

        int s=0;
        int e= row*col -1;
        while(s<=e){
            int mid= s+(e-s)/2;

            int r= mid / col;
            int c= mid % col;

            int val= matrix[r][c];
            if(val==target)return true;
            else if(val>target)e= mid-1;
            else s=mid+1;
        }
        return false;
    }
};
