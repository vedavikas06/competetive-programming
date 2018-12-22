
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

void printl(Node *root){
    if(root){
        printl(root->left);
        if(!root->left && !root->right){
            cout << root->data << " ";
        }
        printl(root->right);
    }
}

void printleftb(Node *root){
    if(root){
        if(root->left){
            cout << root->data << " ";
            printleftb(root->left);
        }
        else if(root->right){
           cout << root->data << " ";
           printleftb(root->right); 
        }
       
    }
}

void printrightb(Node *root){
    if(root){
        if(root->right){
            
            printrightb(root->right);
            cout << root->data << " ";
        }
        else if(root->left){
           
           printrightb(root->left); 
           cout << root->data << " ";
        }
       
    }
}

void printBoundary(Node *root)
{
     if(root){
        cout << root->data << " ";
        printleftb(root->left);
        
        printl(root->left);
        printl(root->right);
        
        printrightb(root->right);
           
     }
     
}
