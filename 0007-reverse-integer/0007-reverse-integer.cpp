class Solution {
public:
    int reverse(int x) {
    long long r,result=0;
      while(x!=0){
        r=x%10;
        result=(result*10)+r;
        x=x/10;
      }
      if(result>INT_MAX||result<INT_MIN){

        return 0;
      }
      return result;  
    }
};