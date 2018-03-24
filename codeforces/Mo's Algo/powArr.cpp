//codeforces powArr.cpp
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

int a[300005],cnt[1000005];

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


int main(){

scanf("%d %d",&n,&q);

block = 1000;

for (int i = 1; i <= n ; ++i)
{
  //cin >> a[i];
  scanf("%d",&a[i]);
}


for (int i = 0; i < q; ++i)
{

  int a,b;
   
  //cin >> a >> b; 
  scanf("%d %d",&a,&b);
  // pair< pair<int,int>,int > = 
  qu.pb({{a,b},i});//make_pair(make_pair(a,b),i);
 // cout << qu[i].first.first << qu[i].first.second << qu[i].second << endl;

  
}


sort(qu.begin(),qu.end(),comp);


// for (int i = 0; i < q; ++i)
// {
//    cout << qu[i].first.first << qu[i].first.second << qu[i].second << endl;
 
// }

int left_mo = 1,right_mo = 0;

long long sum = 0;

vector<long long> op(q); 

for (int i = 0; i < q; ++i)
{
  int left = qu[i].first.first;

  int right = qu[i].first.second;

  //cout << left << " " << right << endl;

  while(right_mo < right){
   
   right_mo++;
   
   cnt[a[right_mo]]++;
   
   sum += (2*cnt[a[right_mo]]-1)*a[right_mo];

  }

  while(right_mo > right){

   cnt[a[right_mo]]--;
   
   sum -= (2*cnt[a[right_mo]]+1)*a[right_mo];

   right_mo--;

  }

  while(left_mo < left){

   cnt[a[left_mo]]--;
   
   sum -= (2*cnt[a[left_mo]]+1)*a[left_mo];
   
   left_mo++;
 }

 while(left_mo > left){
 
   left_mo--;

   cnt[a[left_mo]]++;
   
   sum += (2*cnt[a[left_mo]]-1)*a[left_mo];

   
  }


  op[qu[i].second] = sum;

  //cout << "sum" << sum << endl;
  
}

for (int i = 0; i < q; ++i)
{
  
  cout << op[i] << endl;
  // printf("%lld\n",op[i]);

}



return 0;


}
