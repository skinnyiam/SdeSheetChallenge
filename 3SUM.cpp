class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int sum=0-nums[i];
                int lo=i+1;
                int high=n-1;
                while(lo<high){
                    if(nums[lo]+nums[high]==sum){
                        vector<int> ans;
                        ans.push_back(nums[i]);
                        ans.push_back(nums[lo]);
                        ans.push_back(nums[high]);
                        res.push_back(ans);
                        while(lo<high && nums[lo]==nums[lo+1]) lo++;
                        while(lo<high && nums[high]==nums[high-1]) high--;
                        lo++;
                        high--;
                    }
                    else if(nums[lo]+nums[high]>sum){
                        high--;
                    }else{
                        lo++;
                    }
                }
            }
        }
        return res;
    }
};
