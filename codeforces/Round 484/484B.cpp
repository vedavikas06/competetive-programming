//484B.cpp
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

vector<pair<int,int> > v(n);


for (int i = 0; i < n; ++i)
 {
 	cin >> v[i].first;

 	v[i].second = i+1;
     
 } 
sort(v.begin(),v.end());


// for (int i = 0; i < n; ++i)
// {
// 	cout << v[i].first << v[i].second << endl;
// }

deque<int> q;

int cnt = 0;

for (int i = 1; i <= 2*n; ++i)
{
	char ch;

	cin >> ch;
  

    if(ch == '0'){
    
    q.push_front(v[cnt++].second);

    cout << v[cnt-1].second  << " ";  

    }else{

    	cout << q.front() << " ";

    	q.pop_front();
    }



}

cout << endl;



return 0;


}
