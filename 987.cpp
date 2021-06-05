// time - O(nlogn)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;

    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>> v;
        if(!root)
            return v;
        unordered_map<int, vector<int>> m; 
        map<int, vector<int>> temp;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        
        int lo = 0, hi = 0;
        
        while(q.size())
        {
            int n = q.size();
            temp.clear();
            for(int i=0;i<n;i++)
            {
                pair<TreeNode*, int> f = q.front();
                q.pop();
                temp[f.second].push_back(f.first->val);
                
                if(f.first->left)
                    q.push({f.first->left, f.second-1});
                if(f.first->right)
                    q.push({f.first->right, f.second+1});
                
                lo = min(lo, f.second);
                hi = max(hi, f.second);
            }
            for(auto it : temp)
            {
                sort(it.second.begin(), it.second.end());
                for(int i : it.second)
                    m[it.first].push_back(i);
            }
        }
        
        for(int i=lo;i<=hi;i++)
            v.push_back(m[i]);
        return v;
    }



int main(){
  
  return 0;
}