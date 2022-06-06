//next permutation 
// TC O(N) SC O(1)
/* take a example 5 4 3 2 1
in this next permutation will be the 1 2 3 4 5
because no no is greater than this.

Next if we have 1 3 5 4 2

here first step is to traverse from the backward and find the value a[i]<a[i+1]
i.e first index let say ind1=1;

second step to find the index which is greater than ind1 let say it ind2 a[ind2]>a[ind1]
i.e ind2=3 having value 4

third step is to swap(a[ind1],a[ind2])  1 4 5 3 2

forth step is to reverse(ind1+1,to_last_element).  1 4 2 3 5 ---> ans


Intution lies in dictionary order it will increase for a certain order and then start decreasing the value 
so in starting value will be 1 3 4 5 2
so we need someone whose prefix is greater like 1 4 greater than 1 3
then we can reverse remaining to get least value in sorted order.

*/

 void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int temp;
        int res;
        for(temp=n-2;temp>=0;temp--){
            if(nums[temp]<nums[temp+1]){
                break;
            }
        }
        if(temp<0){
            reverse(nums.begin(),nums.end());
        }else{
        for(res=n-1;res>temp;res--){
             if(nums[res]>nums[temp]){
                 break;
             }
        }
        
        swap(nums[temp],nums[res]);
        reverse(nums.begin()+temp+1,nums.end());
        }
    }
