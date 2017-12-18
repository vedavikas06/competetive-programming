//codeforces 452A.cpp 
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
int cnt1 = 0,cnt2=0;


for (int i = 0; i < n; ++i)
{
  cin >> samp;
if(samp==1){
  cnt1++;
}else{
  cnt2++;
}

}

//cout << cnt1 << " " << cnt2 << endl; 
int t = (cnt1-min(cnt1,cnt2))/3;
cout << min(cnt1,cnt2)+t << endl;



return 0;





}






