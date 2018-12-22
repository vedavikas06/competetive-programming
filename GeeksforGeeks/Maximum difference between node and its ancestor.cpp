
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
/* Your are required to 
complete this method*/


int Maxdiff(Node* root,int *maxxdiff){
    
    if(!root){
        return INT_MAX;
    }
    if(!root->left && !root->right){
        return root->data;
    }
    int minn = min(Maxdiff(root->left,maxxdiff),Maxdiff(root->right,maxxdiff));
    *maxxdiff = max(*maxxdiff,root->data-minn);
    minn = min(minn,root->data);
    return minn;
    
    
}

int maxDiff(Node* root)
{
    int maxxdiff = INT_MIN;
    Maxdiff(root,&maxxdiff);
    
    return maxxdiff;
}


