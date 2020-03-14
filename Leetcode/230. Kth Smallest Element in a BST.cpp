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
    int ksmall(TreeNode* root, int k,int& c){
        if(!root || c>k){
            return -1;
        }
        
        int p1 = ksmall(root->left,k,c);
        
        if(p1!=-1){
            return p1;
        }
        
        c++;
        if(c==k){
            return root->val;
        }
        
        int p2 = ksmall(root->right,k,c);
        
        if(p2!=-1){
            return p2;
        }
        return -1;
    }
    
    int kthSmallest(TreeNode* root, int k) {
        
        int c = 0;
        return ksmall(root,k,c);
        
    }
};
