/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        stack<pair<TreeNode*,int>> s;
        vector<int> res;
        s.push({root,0});
        
        while(!s.empty()){
            pair<TreeNode*,int> tp = s.top();
            s.pop();
            if(tp.second==3 || tp.first==NULL){
                continue;
            }
            
            s.push({tp.first,tp.second+1});
            
            if(tp.second==0){
               s.push({tp.first->left,0}); 
            }else if(tp.second==1){
                res.push_back(tp.first->val);
            }else if(tp.second==2){
                s.push({tp.first->right,0}); 
            }
        }
        
        return res;
        
    }
};
