#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define fir first
#define sec second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define L int
#define mx 100009
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;


int main() {

  // int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

 int n,m;

 cin >> n >> m;

 string s1,s2;

//  for(int i = 0;i<n;i++){
//   char ch;
//   cin >> ch;

//   if(ch != '*'){
//     if(s1.empty())
//     s1+=ch;
//   else if(s1.back() == ')'){
//     s1+='(';
//     s1+=ch;
//   }else{
//     s1+=ch;
//   }

//   }else{
    
//     if(s1.empty()){
//       s1+=")(.*)";
//     }
//     else if(s1.back() != ')'){
//     s1+=")(.*)";

//   }else{
//     s1+="(.*)";
//   }
//  }

// }

// if(s1.back() != ')'){
//   s1+=')';
// }
// char a;
 cin >> s1 >> s2;

 int cnt =0,st=0,end=0;
 for (int i = 0; i < n; ++i)
 {
   if(s1[i]=='*'){
   cnt++;
   st=i;
   end = i+1;
   }
 }

 if(cnt==0 || n > m+1){
  if(s1==s2){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
 }else{

  
 //cout << st << " " << end << endl;

  for (int i = 0; i < st; ++i)
  {
   if(s1[i]==s2[i]){
    continue;
   }else{
    cout << "NO" << endl;
    return 0;
   }
  }

  for (int i = n-1,j=m-1; i >= end ; i--,j--)
  {
    if(s1[i]==s2[j]){
      continue;
    }else{
      cout << "NO" << endl;
    return 0;
    }
  }



 }

cout << "YES" << endl;


 // cout << s1 <<  s2 << endl;

 // regex b(s1);

 // if(regex_match(s2, b) ){
 //  cout << "YES" << endl;
 // }else{
 //  cout << "NO" << endl;
 // }





  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}
