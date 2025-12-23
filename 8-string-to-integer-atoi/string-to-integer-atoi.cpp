class Solution {
public:
    int myAtoi(string s) {
        //whitespace ignore krna hai sign is decided agr koi +- mile toh , nhi toh + hi hoga , agr koi num nhi hai ya jaha nondigit hai waha se return ho jao 
        int i=0 , sign =1;
        long res =0;
        while(i<s.length() && s[i]== ' ')i++;  
        if(i==s.size())return 0;
        if(s[i]=='-'){
            sign = -1;
            i++;
        }else if (s[i]=='+'){
i++;
        }
        while(i<s.size() && isdigit(s[i])){
            res = res*10 +(s[i]-'0'); //to make num from the string
            if(res*sign >INT_MAX)return INT_MAX;
            if(sign*res<INT_MIN)return INT_MIN;
            i++;
        }
        return (int)(sign*res);
    }
};