//spoj dquery.cpp
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



int n,q,block;

//int bit[100050];

int a[300005];

vector< pair< pair<int,int>,int > > qu;


bool comp(pair< pair<int,int>,int > a,pair< pair<int,int>,int > b){

int a1 = a.first.first/block;

int a2 = b.first.first/block;

if(a1 == a2){

  return a.first.second < b.first.second;

}else{
  
  return a1 < a2;

}


}



unordered_map<int,int> mp1,mp2;

vector< vector<int> > v;

vector<int> pre;

pre.pb(11);

void preOrder(int i){

pre.pb(i);

for (int i = 0; i < v[i].size(); ++i)
{
  preOrder(v[i]);
}



}

int start[100050],end[100050];

int st = 1;
void DFSUtil(int v1, bool visited[])
{
    
    visited[v1] = true;

    start[v1] = st++; 
    
    vector<int>::iterator i;
    for (i = v[v1].begin(); i != v[v1].end(); ++i){
      
        if (!visited[*i]){
          
            DFSUtil(*i, visited);

          }

        }
      end[v1] = st;
}
 

void DFS(int v)
{

    bool *visited = new bool[n+1];
    for (int i = 1; i <= n; i++){
        visited[i] = false;
      }
 
     DFSUtil(v, visited);
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

}

preOrder(1);

cout << "preOrder" << " ";

for (int i = 1; i <= preOrder.size() ; ++i)
{

  cout << preOrder[i] << " ";

}

cout << endl;

cout << "start" << endl;

for (int i = 1; i <= n; ++i)
{
  cout << i << " " << start[i] << " " << end[i] << endl;
}



for (int i = 0; i < q; ++i)
{

  int a1,a,b;
   
  cin >> a1;
  
  a = start[a1];

  b = end[a1];

  //scanf("%d %d",&a,&b);
  // pair< pair<int,int>,int > = 
  qu.pb({{a,b},i});//make_pair(make_pair(a,b),i);
  cout << "queries" << qu[i].first.first << " " <<qu[i].first.second << " " << qu[i].second << endl;

  
}


sort(qu.begin(),qu.end(),comp);


for (int i = 0; i < q; ++i)
{
   cout << qu[i].first.first << qu[i].first.second << qu[i].second << endl;
 
}

// int left_mo = 1,right_mo = 0;

// int sum = 0;

// vector<int> op(q); 

// for (int i = 0; i < q; ++i)
// {
//   int left = qu[i].first.first;

//   int right = qu[i].first.second;

//   //cout << left << " " << right << endl;

//   while(right_mo < right){
   
//    right_mo++;
   
//    cnt[a[right_mo]]++;
   
//    if(cnt[a[right_mo]] == 1){
   
//    sum++;
   
//    }

//   }

//   while(right_mo > right){

//    cnt[a[right_mo]]--;
   
//    if(cnt[a[right_mo]] == 0){
   
//    sum--;
   
//    }

//    right_mo--;

//   }

//   while(left_mo < left){

//    cnt[a[left_mo]]--;
   
//    if(cnt[a[left_mo]] == 0){
   
//    sum--;
   
//    }
   
//    left_mo++;
//  }

//  while(left_mo > left){
 
//    left_mo--;

//    cnt[a[left_mo]]++;
   
//    if(cnt[a[left_mo]] == 1){
   
//    sum++;
   
//    }

//   }


//   op[qu[i].second] = sum;

//   //cout << "sum" << sum << endl;
  
// }

// for (int i = 0; i < q; ++i)
// {
  
//   //cout << op[i] << endl;
//   printf("%d\n",op[i]);

// }



return 0;


}
