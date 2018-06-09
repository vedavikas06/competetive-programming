//hackerank byterace
#include <bits/stdc++.h>

using namespace std;


#define pb push_back
#define sf scanf
#define pf printf
#define f first
#define s second
#define clr(x,y) memset(x,y,sizeof x)
#define ll long long
#define L int
#define mx 100009
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

int *BITree = new int[100010];

int getSum(int index)
{
    int sum = 0; // Iniialize result
 
    
    while (index>0)
    {
        
        sum += BITree[index];
 
        
        index -= index & (-index);
    }
    return sum;
}


void updateBIT(int n, int index)
{
    
 
    while (index <= n)
    {
       
       BITree[index] += 1;
 
       index += index & (-index);
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    
    cin.tie(NULL);
    
    int n;
    
    cin >> n;
    
    vector<pair<int,int> > v;

    map<int,int> m;

    for (int i = 0; i < n; ++i)
    {
        int a,b;

        cin >> a >> b;

        v.pb({a,b});
        
        m[b] = 1;
    }
    
    sort(v.begin(),v.end());

  int cnt = 0;

  for(auto&u : m){
    
    u.second = ++cnt;

  }



  for (int i = 0; i < n; ++i)
  {
     v[i].second = m[v[i].second];
  }

 //vector<pair<int,int>> rem;

 //map<int,int> m1;
 
 ll sum = 0;

 int count = 0,rem = 0;

  for (int i = 0; i < n; ++i)
  {


    if(i > 0 && v[i].first != v[i-1].first){

     for (int j = i-1; j >= i-rem ; j--)
     {
         
    updateBIT(n,v[j].second);

    count++;

     }


   rem = 0;

    }
   
  int ed = getSum(v[i].second) - getSum(v[i].second-1);
 
  int gt = count - getSum(v[i].second);

  //cout << ed << " " << gt << endl;
 
  sum += 2*ed + 4*gt;

 // cout << i << " " << sum ;


  if(rem>0){

    sum += 2*rem;
    
    //cout << " " << 2*rem << endl;
  }//else{

  //   cout << endl;
  // }


  rem++;


//cout << rem << endl;

  }

 cout << sum << endl;




    return 0;
}
