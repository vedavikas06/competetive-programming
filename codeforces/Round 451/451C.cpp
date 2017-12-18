//codeforces
//codeforces
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

string Convert (double number){
    ostringstream buff;

    buff<<number;

    return buff.str();   
}


bool hasEnding (string const &fullString, string const &ending) {
    if (fullString.length() >= ending.length()) {
        return (0 == fullString.compare (fullString.length() - ending.length(), ending.length(), ending));
    } else {
        return false;
    }
}


int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);



int n;

cin >> n;

map<string,vector<string> >m;

vector<string> v;




for (int i = 0; i < n; ++i)
{
	

string a;

int cnt;

cin >> a;

cin >> cnt;

if(find(v.begin(),v.end(),a)==v.end()){

		v.push_back(a);
	}

for (int i = 0; i < cnt; ++i)
{
	string st;

	cin >> st;

	

if(m[a].empty()){

m[a].push_back(st);

}else if(find(m[a].begin(),m[a].end(),st)!=m[a].end()){

	continue;
}
else{

bool tr = false;

vector<string>::iterator it;

for ( it = m[a].begin();it!=m[a].end(); ++it)
{
	
tr = hasEnding(*it,st);

if(tr==true){

	break;
}

// bool fr = false;

// fr = hasEnding(st,*it);

// if(fr){

// 	m[a].erase(it);

// }


}

if(tr == false){

m[a].push_back(st);

}




}







}





}


cout << v.size() << endl;

for (int i1 = 0; i1 < v.size(); ++i1)
{
	vector<int> v2;
	
for (int i = 0; i <m[v[i1]].size() ; ++i)
{

	bool tr = false;

	for (int j = 0; j < m[v[i1]].size() ; ++j)
	{
		if(j!=i){
		
  tr = hasEnding(m[v[i1]][j],m[v[i1]][i]);

 


}

  if(tr){

	break;
 
 }

	}

	if(tr){

//m[v[i1]].erase(m[v[i1]].begin() + i);

		v2.push_back(i);

}




}


cout << v[i1] << " " << m[v[i1]].size()-v2.size() << " ";

for (int i = 0; i < m[v[i1]].size(); ++i)
{
	if(find(v2.begin(),v2.end(),i) == v2.end()){
cout << m[v[i1]][i] << " ";

}

}

cout << endl;



}








return 0;





}












































