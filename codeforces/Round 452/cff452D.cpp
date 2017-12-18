//codeforces 452D
#include<bits/stdc++.h>

//using some standard macros..i.e min of 2 elements.
using namespace std;
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define pb push_back


//main function.

string Convert (long long number){
    ostringstream buff;

    buff<<number;

    return buff.str();   
}


int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);


long long n,n1;

//printf("Input no of integers..\n");

cin >> n;

n1=n;

int cnt = 0;

while(n1!=0){
n1/=10;
cnt++;

}
long long st = 0,sum=0;

for (int i = 0; i < cnt; ++i)
{

	st*=10;
	st+=9;

}

// cout << st << endl;


if(n+n-1 == st){

	cout << "1" << endl;
}else{

if(n<=4){

cout << (n*(n-1))/2 << endl;

return 0;

}


if( 2*n-1 <= st){

st/=10;

cnt-=1;

}


while(st <= 2*n-1){

if((st-1)<=n){


sum+=(st-1);


}else{

sum+=((2*n)-st+1);





}

// cout << st << endl;



st+=pow(10,cnt);




}



cout << sum/2 << endl;


}






return 0;

}






















