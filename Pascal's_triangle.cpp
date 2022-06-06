//pascal's triangle 
// 1) if the row number and column number is given we can tell the value by (r-1)^C(c-1). T.C O(N)
// 2) print the nth row of pascal triangle 

 vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        
        for(int i=0;i<rowIndex+1;i++){
            vector<int> temp(i+1,1);
                 for(int j=1;j<i;j++){
                   temp[j]=ans[i-1][j-1]+ans[i-1][j];
                    
            }
            ans.push_back(temp);
            temp.clear();
        } 
        vector<int> res;
        for(int i=0;i<ans.size();i++){
             res.clear();
            for(int j=0;j<ans[i].size();j++){
                res.push_back(ans[i][j]);
               
            }
        }
        
        return res;
    }



// 3) print the pascals triangle

vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for(int i=0;i<numRows;i++){
            vector<int> temp(i+1,1);
                 for(int j=1;j<i;j++){
                   temp[j]=ans[i-1][j-1]+ans[i-1][j];
                    
            }
            ans.push_back(temp);
        } 
        return ans;
    }
