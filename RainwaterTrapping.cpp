class Solution {
public:
    int trap(vector<int>& height) {
        //brute force
        int res=0;
        int n=height.size();
        // for(int i=1;i<n-1;i++){
        //     int left=height[i];
        //     for(int j=0;j<i;j++){
        //         left=max(left,height[j]);
        //     }
        //     int right=height[i];
        //     for(int j=i+1;j<n;j++){
        //         right=max(right,height[j]);
        //     }
        //     res=res+min(left,right)-height[i];
        // }
        // return res;
        
        //optimized
        
        int l=0;
        int high=n-1;
        int left_max=0;
        int right_max=0;
        while(l<=high){
            if(height[l]<=height[high]){
                if(height[l]>=left_max) left_max=height[l];
                else res+=left_max-height[l];
                l++;
            }else{
                if(height[high]>=right_max) right_max=height[high];
                else res+=right_max-height[high];
                high--;
            }
        }
        return res;
    }
};
