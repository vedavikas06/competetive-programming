//cff 466B.cpp
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define f first
#define s second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define mx 100009
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;




int main(){

ios_base::sync_with_stdio(false);

cin.tie(NULL);

LL n,k,a,b;

cin >> n >> k >> a >> b;

LL n1 = n;

LL val = 0;


if(k==1){


val = (n-1)*a;


}else{

while(n1!=1){

if(n1%k==0 && k!=1){

val += min((n1-(n1/k))*a,b);

n1 = n1/k;

}else{

   if(n1-(n1%k) > 0){
	val += ((n1%k))*a;

	n1-= n1%k;

 }else{

 	val += (n1-1)*a;

 	n1 = 1;
 }



}

//cout << n1 << " " << val <<  endl;


}

}

cout << val << endl;



return 0;


}



