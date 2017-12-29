//codeforces 455A.cpp
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

string s1,s2;

cin >> s1 >> s2;

vector<string> v;

for (int i = 1; i <= s1.length(); ++i)
{
 

 for (int j = 1; j <= s2.length(); ++j)
 {
   
   v.pb(s1.substr(0,i)+s2.substr(0,j));

 }


}


sort(v.begin(),v.end());


cout << v[0] << endl;






return 0;


}
