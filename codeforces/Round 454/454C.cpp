//codeforces 454C.cpp
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

int n;

cin >> n;

unordered_map<char,int> v;

int cnt = 0;

int j = 0;

for (int i1 = 1; i1 <= n; ++i1)
{
  
char ch;

string s;

cin >> ch >> s;

// cout << ch  << endl;

// cout << s  << endl;

if(ch=='!'){


if(cnt == 0){

for (int i = 0; i < s.length(); ++i)
{
  
if(v[s[i]] == 0){

  v[s[i]] = 1;
}


}

cnt++;

}else{

unordered_map<char,int> v1;

for (int i = 0; i < s.length(); ++i)
{
  
if(v1[s[i]] == 0){

  v1[s[i]] = 1;
}


}


for (char ch1 = 'a'; ch1 <= 'z'; ++ch1)
{

  

 if(v[ch1] == 1 && v1[ch1] == 1){
  v[ch1] = 1;
 }else{

  v[ch1] = -1;

 }

}



}








}else if(ch == '.'){

if(cnt == 0){

for (int i = 0; i < s.length(); ++i)
{
  
  v[s[i]] = -1;

}



}else{

for (int i = 0; i < s.length() ; ++i)
{
  

  //if(v[s[i]] == 1){

  v[s[i]] = -1;

  //}



}

}


}else{

if(i1!=n){

//if(v[s[0]] == 1){

  v[s[0]] = -1;

// }else if(v[s[0]] == 0){
  
// v[s[0]] = -1;

// }



}




}


int sum = 0,sum1=0;

for (char ch1 = 'a'; ch1 <= 'z'; ++ch1)
{

if(v[ch1]==1){
 sum += 1;
}else if(v[ch1] == -1){

  sum1--;
}

}

j++;

if(sum == 1 || sum1 == -25){

break;

}




}

int totSum = 0;


for (int i = j+1; i <= n ; ++i)
{
  
char ch;

string s;

cin >> ch >> s;

if(ch == '!'){
  totSum++;
}else if(ch == '?' && i!= n){

  totSum++;

}





}


cout << totSum << endl;





return 0;


}
