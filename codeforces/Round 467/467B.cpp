//cff 467B.cpp
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

int primeNxt(int y,int p){

for (int i = y; i > max(p,y-500)  ; i--)
{
	bool isPrime = true;

	for (int j = 2; j <= min(p,(int)sqrt(i)) ; ++j)
	{
	 if(i%j == 0){

	 	isPrime = false;

	 	break;
	 }

	}
     

     if(isPrime == true){

     	return i;

     }

}

return -1;

}

int primeLst(int p){

for (int i = p+1; i <= INT_MAX ; i++)
{
	bool isPrime = true;

	for (int j = 2; j <= sqrt(i) ; ++j)
	{
	 if(i%j == 0){

	 	isPrime = false;

	 	break;
	 }

	}
     

     if(isPrime == true){

     	return i;

     }

}

return -1;

}




int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);

int p,y;

cin >> p >> y;

int prime1 = primeNxt(y,p);

//int prime2 = primeLst(p);

//cout << prime1 << " " << prime2 << endl;

if(prime1 == -1 ){
	cout << "-1" << endl;
}else{
	//cout << prime1 << " " << y-(y%prime2) << endl;
	cout << prime1 << endl;
}



return 0;


}



