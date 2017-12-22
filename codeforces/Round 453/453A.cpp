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
 
bool BFS(int s,vector<int> adj[],int m)
{
    
    list<int> queue;
 =
    queue.push_back(s);
 
    
    vector<int>::iterator i;
 
    while(!queue.empty())
    {
        
        s = queue.front();
        queue.pop_front();
 
       
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
          
                queue.push_back(*i);

                if(*i==m){
                	cout << "YES" << endl;
                	return true;
                }
            }
        }
    }

    cout << "NO" << endl;

return false;
}


int main(){



ios_base::sync_with_stdio(false);

cin.tie(NULL);


int n,m;

cin >> n >> m;


int max1 = 0;

for (int i = 0; i < n; ++i)
{
	
int a,b;

cin >> a >> b;

if(a<=max1){
max1 =  max(max1,b);
}



}

if(max1>=m){

	cout << "YES" << endl;
}else{
	cout << "NO" << endl;
}



return 0;


}
