//codeforces goodbyeA.cpp
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

string s;

cin >> s;

int cnt = 0;
for (int i = 0; i < s.length(); ++i)
{
  if(s[i] == 'a'|| s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ){
    cnt++;

  }else if(s[i]>=48 && s[i] <= 57 && s[i]%2==1){

 cnt++;

  }

}

cout << cnt << endl;


return 0;


}
