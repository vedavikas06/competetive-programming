#include <bits/stdc++.h>
 
using namespace std;
 
int *tree,*a;
void build(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = a[start];
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = max(tree[2*node] , tree[2*node+1]);
    }
}
 
 
void updateRange(int node, int start, int end, int l, int r,int val)
{
    // out of range
    if (start > end or start > r or end < l)
        return;
 
    // Current node is a leaf node
    if (start == end)
    {
        // Add the difference to current node
        tree[node] =val;
        return;
    }
 
    // If not a leaf node, recur for children.
    int mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r,val);
    updateRange(node*2 + 1, mid + 1, end, l, r,val);
 
    // Use the result of children calls to update this node
    tree[node] = max(tree[node*2] ,tree[node*2+1]);
 
}
 
 
 
 
int query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return 0;
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
 
    int p1 = query(2*node, start, mid, l, r);
 
    int p2 = query(2*node+1, mid+1, end, l, r);
 
    return max(p1 , p2);
}
 
 
 
int main(){
 
 
ios_base::sync_with_stdio(false);
 
cin.tie(NULL);
 
int n,q;
 
long long l,r;
 
cin >> n >> q >> l >> r;
 
//int a[n+1];
 
 tree = new int[2*n+2];
 
a = new int[n+1];
 
for (int i = 0; i <= n; ++i)
{
	a[i] =0;
}
 
for (int i = 0; i <= 2*n+1; ++i)
{
    tree[i] =0;
}
 
 
build(1, 1, n);
 
for (int i = 0; i < q; ++i)
{	
 
int a1,b,c;
 
cin >> a1 >> b >> c;
 
if(a1==1){
 
updateRange(1, 1, n, b, b,c);
 
}else{
 
    long long cnt =0;
 
for (int i = b; i <= c; ++i)
{
    for (int j = i; j <= c; ++j)
    {
       
long long  val = query(1, 1, n,i,j);
 
if( val >=l && val <=r ){
 
cnt++;
 
}
 
}
 
 
 
}
 
cout << cnt << endl;
 
}
 
 
 
}
 
 
 
 
 
 
 
}
 
