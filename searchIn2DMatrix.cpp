 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        //optimize 
        //tc--O(log(n*m))
        
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0;
        int high =n*m-1;
        
            while(low<=high){
                int mid=(high+low)/2;
                if(matrix[mid/n][mid%n]==target){
                    return true;
                }else if(matrix[mid/n][mid%n]<target){
                   
                    low=mid+1;
                    
                }else{
                     high=mid-1;
                }
            }
        
        return false;
        
        
        
        
        
        
        //brute force
        // int n=matrix.size();
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<matrix[i].size();j++){
        //         if(matrix[i][j]==target){
        //             return true;
        //         }
        //     }
        // }
        // return false;
    }
