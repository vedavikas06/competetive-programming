//codeforces Tree and queries.cpp
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

struct query{

  int a,b,c,d;

};

int n,q,block;

int bit[100050];

int a[300005];

int N = 100050;


vector< query > qu;


bool comp(query a1,query b1){

int x = a1.a/block;

int y = b1.a/block;

if(x == y){

  return a1.b < b1.b;

}else{
  
  return x < y;

}


}



//unordered_map<int,int> mp1,mp2;

int count1[100050],count2[100050];

vector< vector<int> > v(100050);

vector<int> pre;

 bool *visit = new bool[100050];

void preOrder(int i){

pre.pb(i);

visit[i] = true;

for (int j = 0; j < v[i].size(); ++j)
{
  if(!visit[v[i][j]]){
  
  preOrder(v[i][j]);

  }

}



}

int start[100050],end1[100050];

int st = 1;
void DFSUtil(int v1, bool visited[])
{
    
    visited[v1] = true;

    start[v1] = st; 
    
    vector<int>::iterator i;
    for (i = v[v1].begin(); i != v[v1].end(); ++i){
      
        if (!visited[*i]){

            st++;

            DFSUtil(*i, visited);

          }

        }
      end1[v1] = st;
}
 

void DFS(int v)
{

    bool *visited = new bool[n+1];
    
    for (int i = 1; i <= n; i++){
    
        visited[i] = false;
    
      }
 
     DFSUtil(v, visited);
}


int getSum(int index)
{
    int sum = 0; // Initialize result
 
    // Traverse ancestors of BITree[index]
    while (index > 0)
    {
        // Add current element of BITree to sum
        sum += bit[index];
 
        // Move index to parent node in getSum View
        index -= index & (-index);

        //cout << index << endl;
    }

    return sum;

}


void updateBIT(int index, int val)
{
    // Traverse all ancestors and add 'val'
    while (index <= N && index > 0)
    {
       // Add 'val' to current node of BI Tree
       bit[index] += val;
 
       // Update index to that of parent in update View
       index += index & (-index);
       //cout << index << endl;
    }

}

int main(){

ios_base::sync_with_stdio(false);

cin.tie(NULL);

cin >> n >> q;

//scanf("%d",&n);

block = 1000;

for (int i = 1; i <= n ; ++i)
{
  cin >> a[i];
  //scanf("%d",&a[i]);
}


for (int i = 0; i < n-1; ++i)
{
  int a,b;
  
  cin >> a >> b;

  v[a].pb(b);
  v[b].pb(a);

}

pre.pb(100049);

preOrder(1);

DFS(1);

cout << "preOrder" << " ";

for (int i = 1; i < pre.size() ; ++i)
{

  cout << pre[i] << " ";

}

cout << endl;

cout << "start" << endl;

for (int i = 1; i <= n; ++i)
{
  cout << i << " " << start[i] << " " << end1[i] << endl;
}



for (int i = 0; i < q; ++i)
{

  int a1,a,b,k;
   
  cin >> a1 >> k;
  
  a = start[a1];

  b = end1[a1];

  //scanf("%d %d",&a,&b);
  // pair< pair<int,int>,int > = 
  qu.pb({a,b,k,i});//make_pair(make_pair(a,b),i);

  //cout << "queries" << qu[i].a << " " <<qu[i].b << " " << qu[i].c << " " << qu[i].d << endl;

  
}


sort(qu.begin(),qu.end(),comp);


// for (int i = 0; i < q; ++i)
// {
//   cout << qu[i].a << " " <<qu[i].b << " " << qu[i].c << " " << qu[i].d << endl;
 
// }

int left_mo = 1,right_mo = 0;

int sum = 0;

vector<int> op(q); 

bool seen[n+1];

for (int i = 0; i < q; ++i)
{
  int left = qu[i].a;

  int right = qu[i].b;

  //cout << left << " " << right << endl;
  //---
  while(right_mo < right){
   
   right_mo++;

   count1[a[right_mo]]++;

   int cnt = count1[a[right_mo]];

   cout << left_mo << " " << right_mo << " " << a[right_mo] << " "  << count1[a[right_mo]]  << endl;

    updateBIT(cnt,1);

   // cout << cnt << endl;
   // if(cnt>1){

    updateBIT(cnt-1,-1);
    
    //}

  }

  while(right_mo > right){

  count1[a[right_mo]]--;

  int cnt = count1[a[right_mo]]--;


  cout << left_mo << " " << right_mo << " " << a[right_mo] << " "  << count1[a[right_mo]]  << endl;

  updateBIT(cnt+1,-1);
   
  //if(cnt>=1){

    updateBIT(cnt,1);

    //}

   
    right_mo--;

  }

  while(left_mo < left){

  count1[a[left_mo]]--;

  int cnt = count1[a[left_mo]];

  cout << left_mo << " " << right_mo << " " << a[left_mo]  << " " << count1[a[left_mo]]  << endl;


  updateBIT(cnt+1,-1);
   
  //if(cnt>=1){

    updateBIT(cnt,1);

    //}

   left_mo++;
 
 }

//--
 while(left_mo > left){
 
     left_mo--;

    count1[a[left_mo]]++;

    cout << left_mo << " " << right_mo << " " << a[left_mo] << " "  << count1[a[left_mo]]  << endl;


    int cnt = count1[a[left_mo]];

    updateBIT(cnt,1);

    //if(cnt>1){

    updateBIT(cnt-1,-1);
    
    //}

     

  }

  //cout << getSum(0) << getSum(1) <<  getSum(2) << getSum(3) << getSum(100025) << endl;

  op[qu[i].d] =  getSum(100025)-getSum(qu[i].c-1);

  //cout << op[qu[i].d] << endl;
  
}

for (int i = 0; i < q; ++i)
{
  
  //cout << op[i] << endl;
  printf("%d\n",op[i]);

}



return 0;


}
