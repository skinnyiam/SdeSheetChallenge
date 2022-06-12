double myPow(double x, int n) {
        //optimize solution
        //tc logN
        long long val=n;
        double ans=1.0;
        if(val<0) val=val*-1;
        while(val){
            if(val%2==1){
                ans=ans*x;
                val=val-1;
            }else{
                x=x*x;
                val=val/2;
            }
        }
        if(n<0) ans=(double)(1.0)/(double)(ans);
        return ans;
        
        
        //brute force but tle
        // long long val=n;
        // double ans=1;
        // if(n>=0){
        //     for(int i=0;i<val;i++){
        //         ans*=x;
        //     }
        // }else{
        //     int res=abs(val);
        //     for(int i=0;i<res;i++){
        //         ans*=(1/x);
        //     }
        // }
        // return ans;
        
        
        
        //using stl
        // return (double)pow(x,n);
    }
