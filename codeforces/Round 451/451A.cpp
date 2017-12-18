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



LL n;

cin >> n;


if(n%10==0){
    cout << n << endl;
}else{

if(n%10>5){

    cout << n+10-(n%10) << endl;
}else{
    cout << n-(n%10) << endl;
}


}


