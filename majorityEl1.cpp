 int majorityElement(vector<int>& nums) {
        /*
        map<long long,long long> m;
        int n= nums.size();
        for(int i=0;i<n;i++){
m[nums[i]]++;
        }
        for(auto it:m) if(it.second>(n/2)) return it.first ;
        */
   
   //O(N)
        int count=0;
        int numbers=0;
        for(int num:nums){
            if(count==0){
                numbers=num;
            }
            if(num==numbers) count++;
            else count-=1;
        }
        return numbers;
    }


