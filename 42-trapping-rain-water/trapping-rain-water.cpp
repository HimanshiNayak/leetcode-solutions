// class Solution {
// public:
// vector<int> leftmax(vector<int>&height,int n){
//         vector<int>presum;
//      presum[0] = height[0];
//      for(int i=1;i<n;i++){
//            presum[i] = max(presum[i-1],height[i]);
//         }
//     return presum;
// }
// vector<int> rightmax(vector<int>&height,int n){
//     vector<int>sufsum;
//         sufsum[n-1]= height[n-1];
//         for(int i= n-2;i>=0;i--){
//             sufsum[i] = max(sufsum[i+1],height[i]);
//         }
//         return sufsum;
// }
//     int trap(vector<int>& height) {
//         int n = height.size();
//         vector<int>lsum = leftmax(height,n);
//         vector<int>rsum = rightmax(height,n);
//         int sum =0;
//         for(int i=0;i<n;i++){
//           int h = min(lsum[i],rsum[i])-height[i];
//           sum+=h;
//         }
        
//         return sum;
//     }
// };

















class Solution {
public:
 vector<int> getleftmax(vector<int>&height , int& n){
    vector<int>lmax(n);
    lmax[0]=height[0];
    for(int i=1;i<n;i++){
        lmax[i]=max(lmax[i-1],height[i]);

    }
    return lmax;
 }
 vector<int> getrightmax(vector<int>&height , int& n){
  vector<int>Rmax(n);
    Rmax[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--){
        Rmax[i]=max(Rmax[i+1],height[i]);

    }
    return Rmax;
 }
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmax=getleftmax(height,n);
        vector<int>rightmax=getrightmax(height,n);
        int sum=0;
        for(int i=0;i<n;i++){
            int h=min(leftmax[i],rightmax[i])-height[i];
            sum+=h;
        }
        return sum;
    }
};