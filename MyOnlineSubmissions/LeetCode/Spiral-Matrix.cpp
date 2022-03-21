class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       
        vector <int> ans;
        int m =  matrix.size();  //row count
        int n = matrix[0].size();  //column count
        
        if(m==0) return ans;
        
        int sr = 0, er = m-1, sc = 0, ec = n-1;
        
        int count = 0;
        
        while(sr<=er && sc<=ec)
        {
            //print start row (sr)
            for(int i=sc;i<=ec;i++)
            {
                ans.push_back(matrix[sr][i]);  //column is i
                count++;
            }
            sr++;
            if(count==m*n) return ans;
            
            
            //print end collumn (ec)
            for(int i=sr;i<=er;i++)
            {
                ans.push_back(matrix[i][ec]); //row is variable i
                count++;
            }
            ec--;
            if(count==m*n) return ans;
            
            
            
            //print end row (er) reverse order
            for(int i=ec;i>=sc;i--)
            {
                ans.push_back(matrix[er][i]);  //column is i
                count++;
            }
            er--;
             if(count==m*n) return ans;
            
            //print start column (sc) (down to up)
            for(int i=er;i>=sr;i--)
            {
                ans.push_back(matrix[i][sc]); //row is variable i
                count++;
               
            }
            sc++;
             if(count==m*n) return ans;
        }
        return ans;
    } 
};
