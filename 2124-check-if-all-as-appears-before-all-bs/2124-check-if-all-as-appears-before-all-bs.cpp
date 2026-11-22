class Solution {
public:
    bool checkString(string s) {
       string raj = s;
       sort(raj.begin(),raj.end());
       if(s == raj){
        return true;
       } 
       else{
        return false;
       }
    }
};