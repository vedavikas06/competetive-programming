
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/*  Function which returns the  root of 
    the constructed binary tree. */
Node *createTree(int parent[], int n)
{
    vector<Node *> root(n);
    for(int i=0;i<n;i++){
        root[i] = newNode(i);
    }
   
    for(int i=0;i<n;i++){
       if(parent[i]!=-1){
           if(!root[parent[i]]->left){
                root[parent[i]]->left = root[i];  
           }else{
               root[parent[i]]->right = root[i];
           }
       
       }
        
    }
    
    for(int i=0;i<n;i++){
        if(parent[i]==-1){
            return root[i];
        }
    }
    
    
    
}
