// time - O(n)   
// space - O(1)        

#include<bits/stdc++.h>
using namespace std;

    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        if(n == 0 || matrix[0].size() == 0)
            return 0;
        if(matrix[n-1].back() < target || matrix[0][0] > target)
            return 0;
        for(int i=0;i<n;i++)
        {
            if(matrix[i].back() >= target)
            {
                if(matrix[i][0] > target)
                    return 0;
                return binary_search(matrix[i].begin(), matrix[i].end(), target);
            }
        }
        return 0;
    }




int main(){
  
  return 0;
}