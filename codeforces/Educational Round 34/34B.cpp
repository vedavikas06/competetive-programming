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


int h1,a1,c,h2,a2;


cin >> h1 >> a1 >> c >> h2 >> a2;

vector<int> v;

int cnt =0;

while(h2>0){


// if(h1<= a2 && h2>=a1){

//     h1+=c;

//     v.push_back(1);
// }
    if(h2<=a1 || h1 > a2){

   h2 -= a1;
   
   v.push_back(0); 
}else{

    h1+=c;

   v.push_back(1);

}

if(h2<=0){
    break;
}

  h1-=a2;


cnt++;





}


cout << v.size() << endl;



for (int i = 0; i < v.size() ; ++i)
{
    if(v[i]==0){

        cout << "STRIKE" << endl;
    }else{
        cout << "HEAL" << endl;
    }
}




}
































































