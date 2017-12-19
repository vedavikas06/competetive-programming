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






int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);



int n,a;

cin >> n;


vector<int> v;

for (int i = 0; i < n; ++i)
{
    
cin >> a;
v.push_back(a);
    
}

sort(v.begin(),v.end());



int cnt=0;


while(!v.empty()){

int val = v[0];

vector<int> er;
er.push_back(0);

for (int i = 1; i <v.size(); ++i)
{
    
if(v[i]>val){

val = v[i];

er.push_back(i);

}

}

for (int i = 0; i <er.size() ; ++i)
{
    v[er[i]] = -1;
}
vector<int> v1;

for(int i=0;i<v.size();i++){

if(v[i]!=-1){

    v1.push_back(v[i]);

}

}
v.clear();

v = v1;




cnt++;


}

cout << cnt << endl;




}


































































