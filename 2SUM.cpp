 vector<int> twoSum(vector<int>& nums, int target) {
      
         map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int curr=target-nums[i];
            if(m.find(curr)!=m.end()){
                int ind=m[curr];
               return {ind,i}; 
            }
            m[nums[i]]=i;
        }
        return {};
    }
