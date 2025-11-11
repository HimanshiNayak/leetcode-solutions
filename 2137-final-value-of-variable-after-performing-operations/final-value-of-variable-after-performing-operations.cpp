class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x =0;
    //  for(int i=0;i<operations.size();i++){

    //  }
    for(auto &op:operations){
        if(op=="++X"|| op=="X++"){
            x++;
        }
        else{
            x--;
        }
    }
    return x;
    }
};