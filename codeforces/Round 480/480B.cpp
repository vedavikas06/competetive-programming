//cf 480B.cpp
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


int n,k;

cin >> n >> k;

char c[5][n+1];

for (int i = 1; i <= 4 ; ++i)
{
 for (int j = 1; j <= n ; ++j)
 {
   c[i][j] = '.';	
   
 }

}


if(k!=2*(n-2)){

 
int k1 = k - k%2;

bool full = false;

int a = 2,b = n-1;



while(k1!=0 && !full){

if(a <= (n-1)/2 ){

c[2][a] = '#';

a++;
k1--;

}

if(b>a){

	c[2][b] = '#';
	b--;
	k1--;


}else{

	full = true;

}


}


if(full){


int a = 2,b = n-1;



while(k1!=0){

if(a <= (n-1)/2 ){

c[3][a] = '#';

a++;
k1--;

}

if(b>a){

	c[3][b] = '#';
	b--;
	k1--;


}




}









}

if(k%2==1){

c[2][(n+1)/2] = '#';

}






}else{

for (int i = 2; i <= 3 ; ++i)
{
 for (int j = 2; j <= n-1 ; ++j)
 {
   c[i][j] = '#';	
 }

}



}



cout << "YES" << endl;

for (int i = 1; i <= 4 ; ++i)
{

 for (int j = 1; j <= n ; ++j)
 {
   cout << c[i][j];	
 }

 cout << endl;

}



return 0;


}
