/* The structure of a BST Node is as follows:
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
}; 
*/
Node* minNode(Node* root){
    Node* cur = root;
    while(cur && cur->left){
        cur = cur->left;
    }
    return cur;
}
Node *deleteNode(Node *root,  int x)
{
    // your code goes here
    
    if(!root){
        return root;
    }
    if(x<root->data){
        root->left = deleteNode(root->left,x);
    }else if(x>root->data){
        root->right = deleteNode(root->right,x);
    }
    else{
        if(!root->left){
            Node* temp = root->right;
            return temp;
        } else if(!root->right){
            Node* temp = root->left;
            return temp;
        }   
        
        Node* minN = minNode(root->right);
        root->data = minN->data;
        root->right = deleteNode(root->right,minN->data);
    }
    
    return root;
}
