//codeforces 454B.cpp
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


char ch[10][10];

for (int i = 1; i <= 9 ; ++i)
{
  for (int j = 1; j <= 9 ; ++j)
  {

    
  cin >> ch[i][j];



  }
}


int a,b;

cin >> a >> b;

int c11,c12,d11,d12;

if(a%3==0){
  c11 = 3;
}else{
  c11 = a%3;
}


if(b%3==0){
  d11 = 3;
}else{
  d11 = b%3;
}

c12 = 3*(c11);

c11 = 3*(c11-1)+1;

d12 = 3*d11;

d11 = 3*(d11-1)+1;

// for (int i = 1; i <= 9 ; ++i)
// {
//   for (int j = 1; j <= 9 ; ++j)
//   {

    
//   cout << ch[i][j];



//   }

//   cout << endl;
// }


int cnt = 0;

for (int i = c11; i <= c12 ; ++i)
{
  for (int j = d11; j <= d12 ; ++j)
  {
    
  if(ch[i][j]==46){

ch[i][j] = 33;

cnt++;

  }



  }


}



if(cnt==0){

for (int i = 1; i <= 9 ; ++i)
{
  for (int j = 1; j <= 9 ; ++j)
  {
    
  
 if(ch[i][j] =='.'){

ch[i][j] = '!';



  }


  }


}



}

for (int i = 1; i <= 3 ; ++i)
{
  for (int j = 1; j <= 9 ; ++j)
  {
    
 if(j!=1 && j%3 ==1){

cout << " " << ch[i][j];

 }else{

cout << ch[i][j];

 }


  }

  cout << endl;


}

cout << endl;



for (int i = 4; i <= 6 ; ++i)
{
  for (int j = 1; j <= 9 ; ++j)
  {
    
 if(j!=1 && j%3 ==1){

cout << " " << ch[i][j];

 }else{

cout << ch[i][j];

 }


  }

  cout << endl;


}

cout << endl;



for (int i = 7; i <= 9 ; ++i)
{
  for (int j = 1; j <= 9 ; ++j)
  {
    
 if(j!=1 && j%3 ==1){

cout << " " << ch[i][j];

 }else{

cout << ch[i][j];

 }


  }

  cout << endl;


}




return 0;


}
