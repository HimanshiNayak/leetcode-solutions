class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        //since max , give the gift to largest first baki sb mei se remove 1 and add , then ret total sum  , if cur sum bcmz zero or less break

        sort(happiness.begin(), happiness.end(), greater<int>());
        long long totalsum = 0;
        for(int i=0;i<k;i++){
            int cursum = happiness[i]-i;
            if(cursum<=0)break;
            totalsum += cursum;
        }
      return  totalsum;
    }
};