// first method--hashing
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	pair<int,int> p;
    int ar[n+1]={0};
    for(auto it:arr){
        ar[it]++;
    }
    for(int i=1;i<n+1;i++){
        if(ar[i]>=2){
            p.second=i;
        }
        if(ar[i]==0){
            p.first=i;
        }
    }
    
//     cout<<repeat<<endl;
    
    return p;
}

tc--O(N)
SC---O(N)
  
  //optimal approach is doing xor 
  
