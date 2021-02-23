// time - O(nlogn)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        
        if(target < matrix[0][0] || target > matrix[n-1][m-1])
            return 0;
        
        for(int i=0;i<n;i++)
        {
            if(target <= matrix[i][m-1] && target >= matrix[i][0])
                if(binary_search(matrix[i].begin(), matrix[i].end(), target))
                    return 1;
        }
        return 0;
    }




int main(){
  
  return 0;
}