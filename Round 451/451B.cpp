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


int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);



LL n,a,b;

cin >> n >> a >> b;


for (int i = 0; i <= (n/a) ; ++i)
{

   if((n-(i*a))%b==0){

  if((n-(i*a))/b >= 0){

  int j = (n-(i*a))/b;

if(i!=0 || j!=0){

  cout << "YES" << endl;

  cout << i << " " << j << endl;

  return 0;

}


  }
  


   }


}

cout << "NO" << endl;







return 0;





}




































































































































































































































































































