
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */


void diag(Node *root,map<int,vector<int>> &v,int val=0){
    if(!root){
        return;
    }
    v[val].push_back(root->data);
    
    if(root->left){
    diag(root->left,v,val+1); 
    }
    
    if(root->right){
    diag(root->right,v,val); 
    }
}

void diagonalPrint(Node *root)
{
   
    map<int,vector<int>> v;
    int val =0;
    diag(root,v);
    // vector<int> res;
    // //cout << v.size() << endl;
    for(auto  i:v){
        for(auto j :i.second){
            
            cout << j << " ";
        }
    }
    
}

