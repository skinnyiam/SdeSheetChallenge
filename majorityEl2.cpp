vector<int> majorityElement(vector<int>& nums) {
        
//         map<int,int> m;
//         vector<int> ans;
//         int n= nums.size();
//         for(int i=0;i<n;i++){
// m[nums[i]]++;
//         }
//         for(auto it:m) if(it.second>(n/3)) ans.push_back(it.first) ;
//         return ans;
        vector<int> ans;
        int count=0;
        int count1=0;
        int num=-1;
        int num1=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==num){
                count++;
            }
           else if(nums[i]==num1){
                count1++;
            }
            else if(count==0){
                num=nums[i];
                count=1;
            }
            else if(count1==0){
                num1=nums[i];
                count1=1;
            }else{
                count--;
                count1--;
            }
        }
        count=count1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==num){
                count++;
            }else if(nums[i]==num1){
                count1++;
            }
        }
        if(count>n/3){
            ans.push_back(num);
        }
        if(count1>n/3){
            ans.push_back(num1);
        }
        return ans;
        
    }
