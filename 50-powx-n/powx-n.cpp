class Solution {
public:
    double myPow(double x, int n) {
        //even power gets n/2 and the x is multoiplied by itself
        //odd n = n-1 and ans is multiplied by x

        double ans = 1.0;
        long nn = n;
        if(nn<0)nn = -1*nn;
        while(nn>0){
            if(nn%2==1){
                ans = ans * x;
                nn = nn-1;
            }
            else{
                x= x*x;
                nn= nn/2;
            }
        }
            if (n<0)ans= double(1.0)/double(ans);
 return ans;
    }
};