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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<TreeNode*> v1,v2;
        vector<vector<int>> res;
        if(root==NULL){
            return res;
        }
        v1.push_back(root);
        while(!v1.empty()){
            v2.clear();
            for(int i=0;i<v1.size();i++){
                if(v1[i]->left){
                    v2.push_back(v1[i]->left);
                }
                
                if(v1[i]->right){
                    v2.push_back(v1[i]->right);
                }
                
            }
            
            vector<int> v;
            for(int i=0;i<v1.size();i++){
                v.push_back(v1[i]->val);
            }
            
            res.push_back(v);
            
            v1 = v2;
            
        }
        
        return res;
        
    }
};
