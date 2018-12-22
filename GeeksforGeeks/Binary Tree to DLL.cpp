*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Structure for tree and linked list
struct Node
{
    int data;
    // left is used as previous and right is used
    // as next in DLL
    Node *left, *right;
}; */
// This function should convert a given Binary tree to Doubly
// Linked List
// root --> Root of Binary Tree
// head_ref --> Pointer to head node of created doubly linked list

void btodl(Node *root, Node **head_ref,int &cnt){
    
    if(root){
        if(root->left){
          btodl(root->left, head_ref,cnt);
        }
        if(cnt==0){
            *head_ref = newNode(root->data);
            (*head_ref)->left = NULL;
            cnt++;
        }else{
           
            Node* rig = newNode(root->data);
            (*head_ref)->right = rig;
            rig->left = *head_ref;
            *head_ref = rig;
            cnt++;
            
            
        }
        if(root->right){
          btodl(root->right, head_ref,cnt);
        }
        
        
        
    }
    
    
}
void BToDLL(Node *root, Node **head_ref)
{
    if(root){
        int cnt = 0;
        btodl(root, head_ref,cnt); 
        (*head_ref)->right = NULL;
        
        while((*head_ref)->left!=NULL){
            *head_ref = (*head_ref)->left;
        }
        
    }
    
}
