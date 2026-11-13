class Solution {
public:
    int heightChecker(vector<int>& heights) {
      vector<int> expected = heights;
      sort(expected.begin(),expected.end());
      int count = 0 ;
      
      for(int i = 0;i<heights.size();i++)
      for(int j = 0;j<expected.size();j++)
      
      if(i == j && heights[i] != expected[j]){
       count ++;
      }
      return count;
    }
};