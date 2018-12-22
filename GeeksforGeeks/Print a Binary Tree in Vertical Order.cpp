
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

void vert(Node *root,map<int,vector<int>> &v,int val=0){
    if(!root){
        return;
    }
    v[val].push_back(root->data);
    
    if(root->left){
    vert(root->left,v,val-1); 
    }
    
    if(root->right){
    vert(root->right,v,val+1); 
    }
}

void verticalOrder(Node *root)
{
    //Your code here
    map<int,vector<int>> v;
    int val =0;
    vert(root,v);
    vector<int> res;
    //cout << v.size() << endl;
    for(auto  i:v){
        for(auto j :i.second){
            
            cout << j << " ";
        }
    }
    
    
}

