class Solution {
public:
    int findPeakElement(vector<int>& nums) {

int n = nums.size();
// if nums[0]>nums[1] return 0;
// if(nums[n-1]<nums[n-2])return n-1;
// int a = -1;
// for(int i =1;i<n-1;i++){
//     if(nums[i]>nums[i-1]&& nums[i]>nums[i+1])a = i;
// }
// return a
//     };
if (n==1)return 0;
if (nums[0]>nums[1])return 0;
if(nums[n-1]>nums[n-2])return n-1;
int l = 1, r = n-2;
while(l<=r){
    int mid = l +(r-l)/2;
    if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])return mid;
   if(nums[mid]>nums[mid+1])r = mid-1;
    else l= mid+1;
}
return -1;
    }
    };




























    //     int n = nums.size();
    //   if(n==1)return 0;
    //   if(nums[0] >nums[1])return 0;
    //   if(nums[n-1] >nums[n-2])return n-1;
      
    //   int low = 1, high = n-2; //bcz 0 and n-1 are edge cases
    //   while(low<=high){
    //     int mid = low +(high-low)/2;
        
    //     //if arr[mid ]is peak
    //     if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
    //       return mid;
    //     }
    //     //if on left side ,, eliminate left half
        
    //     if(nums[mid]>nums[mid-1])low = mid+1;
    //     else high = mid-1;
      
    //   }
    //   return -1;
    // }
// };



























