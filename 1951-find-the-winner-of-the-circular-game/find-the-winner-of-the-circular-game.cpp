// class Solution {
// public:
// int function(int n , int k){
//     vector<int>circle;
//     for(int i=1;i<=n;i++){
//         circle.push_back(i);
//     }
//     if(n==1)return circle[0];
//     function((n-1,k)+k)%n);
// }
//     int findTheWinner(int n, int k) {
//         // vector<int> circle;
//         // for (int i = 1; i <= n; ++i) {
//         //     circle.push_back(i);
//         // }
//         // int cur_ind = 0;

//         // while (circle.size() > 1) {
//         //     int next_to_remove = (cur_ind + k - 1) % circle.size();
//         //     circle.erase(circle.begin() + next_to_remove);
//         //     cur_ind = next_to_remove;
//         // }

//         // return circle[0];
//         cout<<function(n,k);
//     }
// };

//use queue and for the nth element keep the n`-1th elements 
class Solution {
public:
    int function(int n, int k) {
        vector<int> circle;
        for (int i = 1; i <= n; i++) {
            circle.push_back(i);
        }
        if (n == 1) return circle[0];
        return (function(n - 1, k) + k -1) % n+1 ;
    }

    int findTheWinner(int n, int k) {
        cout << function(n, k);
        return function(n, k);
    }
};
