/* BST Node
struct Node
{
	int key;
	struct Node *left, *right;
};
*/
// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
// Your code goes here

    if(!root){
        return;
    }
    
    if(root->key > key){
        suc = root;
        return findPreSuc(root->left,pre,suc,key);
    }else if(key > root->key){
        pre = root;
        return findPreSuc(root->right,pre,suc,key);
    }else{
        if(root->left){
            Node* tmp = root->left;
            while(tmp->right){
                tmp = tmp->right;
            }
            pre = tmp;
        }
        if(root->right){
            Node* tmp = root->right;
            while(tmp->left){
                tmp = tmp->right;
            }
            suc = tmp;
        }
        
        
    }
}
