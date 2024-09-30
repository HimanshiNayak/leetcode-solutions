class CustomStack {
public:
vector<int>st;
  int maxsize;
    CustomStack(int maxSize) {
        maxsize = maxSize;
    }
    
    void push(int x) {
        if(st.size()<maxsize){
          st.push_back(x);
        }
    }
    
    int pop() {
     int temp = -1;
      if(st.size()>0){
        temp = st.back();
        st.pop_back();
      }
      return temp;
    }
    
    void increment(int k, int val) {
       int temp = st.size();
      int sksize = min(k, temp);
      for(int i=0;i<sksize;i++){
        st[i] += val;
      }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */