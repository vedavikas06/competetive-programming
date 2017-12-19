
//codeforces 452E.cpp
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
 

int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);


int n;

cin >> n;

//creating a vector of elements with data and thier frequency.

vector<pair<int,int> > v;

int samp1;

cin >> samp1;

v.pb(make_pair(samp1,1)); 

for (int i = 1; i < n; ++i)
{
	cin >> samp1;

	if(v[v.size()-1].first == samp1 ){

		v[v.size()-1].second++;

	}else{

		v.pb(make_pair(samp1,1)); 
	}
  
}

//to get max of elements in o(1og(n))
priority_queue <pair<int,int> > g;

//prev and nxt of each element so as to check them.
int prev[v.size()],nxt[v.size()];


//inserting in the priority queue and intializing the prev and nxt.
for (int i = 0; i < v.size(); ++i)
{

	if(i==0){

		prev[i] = 0;

		if(v.size()>1){

			nxt[i]=i+1;
		
		}else{
		
			nxt[i]=0;
		
		}
	 }else if(i==v.size()-1){
      
      nxt[i] = i;

      if(v.size()>1){
     
      	prev[i] = i-1;
     
      }else{
     
      	prev[i] = 0;
     
      }

	}else{

    prev[i] = i-1;

    nxt[i] = i+1;

	}
	

	g.push(make_pair(v[i].second,-i));

    
}

//size of v.
int cnt1 = v.size();

long long count = 0;
  
//cnt1 is the no of elements in the vector to know after every iteration.
//loop runs untill cnt1 becomes 0.
while(cnt1>0 && !g.empty()){

//finding max element in cnt.

	pair<int,int> sa = g.top();

	g.pop();

	//-sa.second because we stored them as -ve in priority queue such that to get the second element with less value when the first element is same(i.e highest is same.).

	if(v[-sa.second].second == 0){

		continue;
	
	}

//int max_dist = max_element(cnt.begin(),cnt.end(),comp)-cnt.begin();
 int max_dist = -sa.second;

if(prev[max_dist] == max_dist ){


v[max_dist].second = 0;
//using linked list concepts when first element is deleted.

prev[nxt[max_dist]] = nxt[max_dist];

cnt1--;



}else if(nxt[max_dist] == max_dist){

//used linked list concepts when last element is deleted.
nxt[prev[max_dist]] = prev[max_dist];


v[max_dist].second = 0;

cnt1--;

}
else{

//if prev elem == next elem
if(v[prev[max_dist]].first == v[nxt[max_dist]].first){

//adding both segments.
 v[prev[max_dist]].second += v[nxt[max_dist]].second;


g.push(make_pair(v[prev[max_dist]].second,-prev[max_dist]));

v[nxt[max_dist]].second = 0;


v[max_dist].second = 0;


if(nxt[nxt[max_dist]] == nxt[max_dist]){

nxt[prev[max_dist]] = prev[max_dist];



}else{

nxt[prev[max_dist]] = nxt[nxt[max_dist]];

prev[nxt[nxt[max_dist]]] = prev[max_dist];



}


cnt1-=2;


}else{


v[max_dist].second = 0;

prev[nxt[max_dist]] = prev[max_dist];

nxt[prev[max_dist]] = nxt[max_dist];


cnt1--;


}





}





count++;




}


cout << count << endl;






return 0;





}














































