#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main(){
 
 
ios_base::sync_with_stdio(false);
 
cin.tie(NULL);
 
string s;
 
while((cin >> s)){
 
 
 
int w1=0,w2=0;
 
for (int i = 0; i < 5; ++i)
{
   if(s[2*i]=='1'){
      w1++;
   }
  if(abs(w1-w2)>5-i-1){
      if(w1>w2 && w1-w2>=5-i+1){
         cout << "TEAM-A " << 2*i+1 << endl;
         break;
      }else if(w1<w2 && w2-w1>= 5-i ){
         cout << "TEAM-B " << 2*i+1 << endl;
         break;
      }
      
   }
 if(s[2*i+1]=='1'){
      w2++;
   }
 
if(abs(w1-w2)>5-i-1){
      if(w1>w2){
         cout << "TEAM-A " << 2*i+2 << endl;
          break;
      }else if(w1<w2){
         cout << "TEAM-B " << 2*i+2 << endl;
          break;
      }
      
   }
 
 
}
 
 
 
if(w1==w2){
 
for (int i = 5; i < 10; ++i)
{
   
if(s[2*i]=='1'){
      w1++;
   }
 if(s[2*i+1]=='1'){
      w2++;
   }
 
   if(w1!=w2){
    
if(w1>w2){
 
   cout << "TEAM-A " << 2*i+2 << endl;
 
   break;
 
}else{
 
   cout << "TEAM-B " << 2*i+2 << endl;
 
   break;
 
}
 
   }
 
if(i == 9 && w1 == w2){
 
 
   cout << "TIE" << endl;
 
 
}
 
 
}
 
}
 
 
 
 
 
 
}
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
