//codeforces 452B.cpp 
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



int n,samp;

cin >> n;

// vector<int> a;

// for (int i = 0; i < n; ++i)
// {
//     cin >> samp;

// 	a.pb(samp);
// }

string nlnllp = "312831303130313130313031312831303130313130313031312931303130313130313031";
string nllpnl = "312831303130313130313031312931303130313130313031312831303130313130313031";

string lpnlnl = "312931303130313130313031312831303130313130313031312831303130313130313031";

string str="";
for (int i = 0; i < n; ++i)
{
  
string s;

cin >> s;

str+=s;

  }

if(nlnllp.find(str)!=-1){

  cout << "YES" << endl;
}else if(nllpnl.find(str)!=-1){
  cout << "YES" << endl;
}
else if(lpnlnl.find(str)!=-1){
  cout << "YES" << endl;
}else{
  cout << "NO" << endl;
}





return 0;





}




































































































































































































































































































