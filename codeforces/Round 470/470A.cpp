//cff 470A.cpp
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



int a[1000][1000];
bool isvalid(int a,int b,int r,int c){

	bool isVal = (a>=1)&&(a<=r)&&(b>=1)&&(b<=c);
	return isVal;

}
bool isPoss(int x,int y,int r,int c){

	if(isvalid(x,y-1,r,c) ){
		if(a[x][y-1] == 3){
			return false;
		}else if(a[x][y-1] == 0){
			a[x][y-1] = 2;
		}
	}

	if(isvalid(x-1,y,r,c) ){
		if(a[x-1][y] == 3){
			return false;
		}else if(a[x-1][y] == 0){
			a[x-1][y] = 2;
		}
	}

  if(isvalid(x,y+1,r,c) ){
		if(a[x][y+1] == 3){
			return false;
		}else if(a[x][y+1] == 0){
			a[x][y+1] = 2;
		}
	}

	 if(isvalid(x+1,y,r,c) ){
		if(a[x+1][y] == 3){
		
			return false;
		
		}else if(a[x+1][y] == 0){
		
			a[x+1][y] = 2;
		
		}
	
	}

	return true;

}





int main(){

ios_base::sync_with_stdio(false);

cin.tie(NULL);


int r,c;

cin >> r >> c;



for (int i = 1; i <= r ; ++i)
{
	for (int j = 1; j <= c ; ++j)
	{
		char ch;
		cin >> ch;

		if(ch == '.'){
			a[i][j] = 0;
		}else if(ch == 'S'){
            a[i][j] = 1;
		}else{
			a[i][j] = 3;
		}


	}
	
}

int count = 0;

bool poss = true;

for (int i = 1; i <= r; ++i)
{
	for (int j = 1; j <=  c; ++j)
	{
		
  if(a[i][j] == 1){

   if(!isPoss(i,j,r,c)){

   	count += 1;

   	cout << "No" << endl;

   	return 0;

   }

  }


	}

}

cout << "Yes" << endl;

for (int i = 1; i <= r; ++i)
{
	for (int j = 1; j <=  c; ++j)
	{
		
  if(a[i][j] == 0){
   
  cout << '.';

  }else if(a[i][j] == 1){
 
  cout << 'S';

  }else if(a[i][j] == 2){
 
  cout << 'D';

  } else{
 
  cout << 'W';

  } 

  }

  cout << endl;

}






return 0;


}



