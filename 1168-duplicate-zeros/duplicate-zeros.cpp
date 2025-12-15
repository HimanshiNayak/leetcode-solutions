class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

        // insert zeros and shifts on its own and pop the last ele
        // for (int i = 0; i < arr.size(); i++) {
        //     if (arr[i] == 0) {
        //         arr.insert(arr.begin() + i, 0);
        //         arr.pop_back();
        //         i++; 
        //     }
        // }

        // two pinter make the new arr ini to 0 and omve one pointer as i and other as idx
        // which gets +2 if zero

        int n = arr.size();
        vector<int>ans(n,0);
        int idx = 0;
        for(int i=0;i<n && idx<n;i++){
            if(arr[i]==0)idx+=2;
            else {
                ans[idx]= arr[i];
                idx++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]= ans[i];
        }
    }
};