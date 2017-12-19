#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main(){
 
 
ios_base::sync_with_stdio(false);
 
cin.tie(NULL);
 
int t;
 
cin >> t;
 
vector<int> v;
 
v.push_back(0);
 
v.push_back(1);
 
int num,digit,rem,odd,even;
 
for (int i = 2; i < 2000001 ; ++i)
{
	num = i;
	odd = 0,even =0;
        while(num>0){
 
               digit = num % 10;
               num = num / 10;
               rem = digit % 2;
               if(rem != 0)
               odd=odd+digit;
               else
               even=even+digit;
               }
 
         v.push_back(abs(odd-even));      
 
 
}
long long res[1000001];
 
 
 
 
 
// for (int i = 0; i < 1000001; ++i)
// {
// 	res[i]=0;
// }
 
 
int add = 2*v[4]+2*v[5]+1*v[6];
 
res[1] = 2;
 
res[2] = 12;
 
for (int i = 3; i <= 1000000 ; ++i)
{
	
 res[i]=res[i-1]+add;
 
 // add -= 2*v[i+1];
 
 add = add + v[2*i] + 2 * v[2*i+1] + v[2*i+2] - 2 * v[i+1];
 
 
 
 
}
 
 
 
 
for (int i = 1; i <= t; ++i) {
 
 int n;
 
cin >> n;
 
if(res[n]>0){
 
	cout << res[n] << endl;
 
}else{
 
long long sum =0,big=0;
 
for (int i = 2; i <n+2; ++i)
{
	sum+=v[i];
}
 
big+=sum;
 
for (int i = 2; i <= n ; ++i)
{
	
	sum-=v[i];
	sum+=v[n+i];
 
	big+=sum;
}
 
//cout << "res[" << n <<"] = " << big  << ";"<< endl;
 
cout << big << ",";
 
res[n] = big;
 
 
}
 
// long long sum =0;
 
// int in =1;
 
// for (int i = 2; i <= n ; ++i)
// {
	
// 	sum+=(in*(v[i]+v[2*n+2-i]));
 
//      in++;
 
 
// }
 
// sum+=(in*v[n+1]);
 
 
 
// cout << sum << endl;
 
// res[n] = sum;
 
// for (int i = 1; i <= n; ++i)
// {
 
// for (int j = 1+i; j <= n+i ; ++j)
// {
	
 
// cout << v[j] << " ";
 
 
// }
 
// cout << endl;
 
 
// }
// cout << "-----------\n";
 
 
 
 
 
 
 
 
 
}
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
