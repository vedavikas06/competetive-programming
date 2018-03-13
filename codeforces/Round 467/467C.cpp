//cff 467C.cpp
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

int k,d,t;

cin >> k >> d >> t;

if(k<=d){
	if(k<t){

	double in = (1/(double)t);

	double val = in*k+(0.5*in*(d-k));


	
	if(val>=1){

     cout << fixed << setprecision(15) << (double)d << endl;
	
	}else{

     double op = d+((1-val)/in);
      
     cout << op << endl;
      
	}

	
   }else{

    cout << d << endl;
   
   }

}else{

double st = 0;

double val = 0,inc = 1/(double)t;

//cout << inc << endl;

//bool turnedOn = true;

while(st+d <= k && val < 1){

val += d*inc;

if(val < 1){
 
  st += d;

}
//cout << st << " " << val << endl;
}

if(val>=1){

cout << st+t << endl;
return 0;

}

if(k%d == 0){
	cout << t << endl;
}else{

val += (k%d)*inc+(d-(k%d))*0.5*inc;

st += d;

//cout << val << " " << st << endl;

if(val>=1){
cout << st << endl;
return 0;
}

st += ((1-val)/inc);


cout << st << endl;

}



}


return 0;


}



