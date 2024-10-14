class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        //sort both the arr// then see if this cookie can satisfy the greed of the cchild , if not move to the next cookie , if yes then move to next cookie and child , and the greed will be the no. of greed satisfied
      
      int n= g.size();
      int m = s.size();
      sort(g.begin() , g.end());
      sort(s.begin() , s.end());
       int i =0 , j=0;
      while(i<n && j<m){
        if(g[i]<=s[j]){
          i++;  // sirf baccha aage //kyuki satisfy ho gya
        }
        
        j++; 
        
      }
      return i;
    }
};