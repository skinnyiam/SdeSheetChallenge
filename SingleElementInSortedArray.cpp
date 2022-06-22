class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }if(nums[0]!=nums[1]){
            return nums[0];
        }if(nums[nums.size()-1]!=nums[nums.size()-2]){
            return nums[nums.size()-1];
        }
        int low=0;
        int n=nums.size();
        int high=n-1;
        while(low<high){
            int mid=(low+high)/2;
            if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
           if(mid%2==0){
               if(nums[mid]==nums[mid-1]){
                   high=mid;
               }else{
                   low=mid+1;
               }
           }else{
               if(nums[mid]==nums[mid-1]){
                   low=mid+1;
               }else{
                   high=mid;
               }
           }
        }
        
        //brute force
       //  map<int,int> mp;
       //  for(auto it:nums) mp[it]++;
       //  for(auto it:mp) if(it.second==1) return it.first;
       return 0;
        
        
    }
   
};
