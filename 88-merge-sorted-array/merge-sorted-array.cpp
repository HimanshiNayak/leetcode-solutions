// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
// int i = m-1;
// int j = n-1;
// int k= m+n-1;
// while(i>=0 && j>=0){
//     if (nums2[j]>nums1[i])nums1[k--]=nums2[j--];
//     else {nums1[k--]=nums1[i--];}
// }
//     while(j>=0){
//         nums1[k--]=nums2[j--];

// }
    
//     }
// };
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        copy(nums2.begin(), nums2.end(), nums1.begin() + m);
        sort(nums1.begin(), nums1.end());
    }
};