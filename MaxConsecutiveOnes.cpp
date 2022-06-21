class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxSum=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                sum+=nums[i];
            }else{
                sum=0;
            }
            maxSum=max(sum,maxSum);
        }
        return maxSum;
    }
};
