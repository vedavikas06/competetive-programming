//codeforces 453A.cpp
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define f first
#define s second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define L int
#define mx 100009
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
 
// bool BFS(int s,vector<int> adj[],int m)
// {
//     // Mark all the vertices as not visited
//     // bool *visited = new bool[101];
//     // for(int i = 0; i < V; i++)
//     //     visited[i] = false;
 
//     // Create a queue for BFS
//     list<int> queue;
 
//     // Mark the current node as visited and enqueue it
//     //visited[0] = true;
//     queue.push_back(s);
 
//     // 'i' will be used to get all adjacent
//     // vertices of a vertex
//     vector<int>::iterator i;
 
//     while(!queue.empty())
//     {
//         // Dequeue a vertex from queue and print it
//         s = queue.front();
//         queue.pop_front();
 
//         // Get all adjacent vertices of the dequeued
//         // vertex s. If a adjacent has not been visited, 
//         // then mark it visited and enqueue it
//         for (i = adj[s].begin(); i != adj[s].end(); ++i)
//         {
//             // if (!visited[*i])
//             // {
//                 //visited[*i] = true;
//                 queue.push_back(*i);

//                 if(*i==m){
//                 	cout << "YES" << endl;
//                 	return true;
//                 }
//             //}
//         }
//     }

//     cout << "NO" << endl;

// return false;
// }




void DFSUtil(int val, bool visited[],vector<int> adj[],int col[])
{
   
    visited[val] = true;

 
    // Recur for all the vertices adjacent
    // to this vertex
    vector<int>::iterator i;
    for (i = adj[val].begin(); i != adj[val].end(); ++i){
        if (col[val]== col[*i]){
            DFSUtil(*i, visited,adj,col);
        }

    }

}
 

int main(){



ios_base::sync_with_stdio(false);

cin.tie(NULL);


int n,val;

cin >> n;


vector<int> v[n+1];


for (int i = 2; i <= n; ++i)
{
	
cin >> val;


	
v[val].pb(i);


}


int col[n+1];

for (int i = 1; i <= n; ++i)
{
    cin >> col[i];
}

int cnt =0;

 bool *visited = new bool[n+1];
    for (int i = 0; i <= n; i++)
        visited[i] = false;
 
    for (int i = 1; i <= n; ++i)
    {
        if(!visited[i]){
    DFSUtil(i, visited,v,col);
    cnt++;
}


}
cout << cnt << endl;


return 0;


}
