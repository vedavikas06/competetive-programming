//codeforces 452C
#include<bits/stdc++.h>

//using some standard macros..i.e min of 2 elements.
using namespace std;
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define pb push_back


//main function.

int main(){

int n;

//printf("Input no of integers..\n");

scanf("%d",&n);

vector<int> v1;

vector<int> v2;

long long s1=0,s2=0;

for (int i = n; i >=1 ; i-=2)
{

	if(s1==s2){
	v1.pb(i);

	v2.pb(i-1);

s1+=i;

s2+=i-1;

}
else if(s1>s2){

if(i-1!=0){
v1.pb(i-1);

}

v2.pb(i);

s1+=i-1;

s2+=i;

}else if(s1<s2){

if(i-1!=0){
v2.pb(i-1);

}

v1.pb(i);

s1+=i;

s2+=i-1;

}










}
cout << abs(s1-s2) << endl;

cout << v1.size() << " ";

for (int i = 0; i < v1.size(); ++i)
{

cout << v1[i] << " ";

}

cout << endl;

return 0;

}






















