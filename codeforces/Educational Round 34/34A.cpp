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


bool hungry(int x){


if(x==0){

    return true;
}
if(x>=3){

bool res = hungry(x-3);

if(res){
    return true;

}

}

if(x>=7){

bool res1 = hungry(x-7);

if(res1){
    return true;
}

}


return false;

}






int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);



int n;

cin >> n;








for (int i = 0; i < n; ++i)
{
   
int val;

cin >> val;


if(hungry(val)){

    cout << "YES" << endl;
}else{

    cout << "NO" << endl;
}








}






}


