// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int rec(unordered_map<int, int> &m, TreeNode *root)
    {
        if(!root)
            return 0;
        int sum = root->val + rec(m, root->left) + rec(m, root->right);
        m[sum]++;
        return sum;
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int, int> m;
        rec(m, root);
        vector<int> v;
        int freq = 0;
        for(auto it=m.begin(); it!=m.end(); it++)
            freq = max(freq, it->second);
        for(auto it=m.begin(); it!=m.end(); it++)
            if(it->second == freq)
                v.push_back(it->first);
        return v;
    }





int main(){
  
  return 0;
}