//cf482C.cpp
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

vector<int> v[300010];
vector<int> m,m1;

 void Dfs(int a, bool visited[])
{
   
    visited[a] = true;
    m.pb(a);

 
    vector<int>::iterator i;
    for (i = v[a].begin(); i != v[a].end(); ++i){
        if (!visited[*i] ){
            Dfs(*i, visited);
          }

    }
}



 void Dfs1(int a, bool visited[])
{
   
    visited[a] = true;
    m1.pb(a);

 
    vector<int>::iterator i;
    for (i = v[a].begin(); i != v[a].end(); ++i){
        if (!visited[*i] ){
            Dfs1(*i, visited);
          }

    }
}



void DFSUtil(int a, bool visited[],int y)
{
   
    visited[a] = true;
    
 
    vector<int>::iterator i;
    for (i = v[a].begin(); i != v[a].end(); ++i){
        if (!visited[*i] && *i != y){
            DFSUtil(*i, visited,y);
          }else if(!visited[*i] && *i == y){
            
            Dfs(*i,visited);
            
          }

    }
}


void DFSUtil1(int a, bool visited[],int y)
{
   
    visited[a] = true;
    
 
    vector<int>::iterator i;
    for (i = v[a].begin(); i != v[a].end(); ++i){
        if (!visited[*i] && *i != y){
            DFSUtil1(*i, visited,y);
          }else if(!visited[*i] && *i == y){
            
            Dfs1(*i,visited);
            
          }

    }
}

int main(){



ios_base::sync_with_stdio(false);

cin.tie(NULL);



LL n;

cin >> n;

int x,y;



cin >> x >> y;

for (int i = 0; i < n-1; ++i)
{
  int x,y;

  cin >> x >> y;

  v[x].pb(y);
  v[y].pb(x);

}


vector<int> v1;

 


    bool *visited = new bool[n+1];
    for (int i = 1; i <= n; i++)
        visited[i] = false;
 
    DFSUtil(x, visited,y);

    for (int i = 1; i <= n; i++)
        visited[i] = false;
   
   DFSUtil1(y, visited,x);
LL s1 = m.size();
LL s2 = m1.size();

 LL a  = (n*(n-1))-(s1*s2);

 cout << a << endl;

return 0;


}
