class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        //brute force
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target){
        //         return i;
        //     }
        // }
        // return -1;
        
        //optimised
       int low=0;
        int n=nums.size();
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            } if(nums[low]<=nums[mid]){
                if(target>=nums[low] && target<=nums[mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else{
                if(target>=nums[mid] && target<=nums[high]){
                    low=mid+1;
                }else{
                    
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};
