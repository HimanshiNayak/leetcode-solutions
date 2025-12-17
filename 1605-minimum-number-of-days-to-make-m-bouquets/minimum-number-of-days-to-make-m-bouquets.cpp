class Solution {
public:
bool possible(vector<int>& bloomDay, int m, int k, int day){
    int n = bloomDay.size();
    int count =0;
    int bou=0;
    for(int i=0;i<n;i++){
         if(bloomDay[i]<=day){
            count++;
            if(count==k){
                bou+=1;
                count=0;
            }
         }
         else{
            count=0;  //as we need adj
         }
    }
    return bou >=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total = 1LL * k * m;
        if(total >bloomDay.size())return -1;
        int l = *min_element(bloomDay.begin() , bloomDay.end());
        int h = *max_element(bloomDay.begin(), bloomDay.end());
        int res = -1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(possible(bloomDay,  m,  k, mid)){
                res = mid ;
                h= mid -1 ; //see for less days for bouqet
            }
            else l = mid+1;
        }
        return res;
    }
};