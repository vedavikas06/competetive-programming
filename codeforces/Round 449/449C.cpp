#include <bits/stdc++.h>

using namespace std;



int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);

int q;

cin >> q;

string s0 = "What are you doing at the end of the world? Are you busy? Will you save us?";

long long length[100001];

length[0] = s0.length();

string s1 = "What are you doing while sending \""+s0+"\"? Are you busy? Will you send \""+s0+"\"?";  

string str1,str2,str3;

str1 = "What are you doing while sending \"";

str2 = "\"? Are you busy? Will you send \"";

str3 = "\"?";

int len = str1.length()+str2.length()+str3.length();

for (int i = 1; i <= 60; ++i)
{
  
length[i] = len+ 2*length[i-1];

}



for (int i = 0; i < q; ++i)
{
  long long n,k;

  cin >> n >> k;

k-=1;


  if(length[n]>k && n<=53){

if(n==0){
    cout << s0[k];
    continue; 
  }

while(1){

  if(n==0){
   // cout << "In string0 " << k;
  cout << s0[k];
  break;
}

if(k>=0 && k<str1.length()){

 // cout << "In string1";

  cout << str1[k];
  break;

}else if(k>=str1.length() && k<str1.length()+length[n-1]){

  n = n-1;

  k = k-str1.length();

  // cout << n << " 0 " << k << endl;

}else if(k>=str1.length()+length[n-1] && k< str1.length()+length[n-1]+str2.length()){

  // cout << "In string2";

cout << str2[k-str1.length()-length[n-1]];

break;

}else if(k>=str1.length()+length[n-1]+str2.length() &&  k< str1.length()+2*(length[n-1])+str2.length()){



  k = k-str1.length()-length[n-1]-str2.length();

   n = n-1;

  //cout << n << " 1 " << k << endl;

}else{

// cout << "In string3";
cout << str3[k-str1.length()-2*(length[n-1])-str2.length()];

break;

}








}





}else if(length[n]<=k && n<= 53){

  cout << ".";

}else{



while(1){


  if(n==0){
   // cout << "In string0 " << k;
  cout << s0[k];

  break;
}

if(k>=0 && k<str1.length()){

 // cout << "In string1";

  cout << str1[k];
  break;

}else if(n>53) {

  n = n-1;

  k = k-str1.length();

  // cout << n << " 0 " << k << endl;

}

if(n==53){
  break;
}



}

if(n==53){

while(1){

  if(n==0){
   // cout << "In string0 " << k;
  cout << s0[k];
  break;
}

if(k>=0 && k<str1.length()){

 // cout << "In string1";

  cout << str1[k];
  break;

}else if(k>=str1.length() && k<str1.length()+length[n-1]){

  n = n-1;

  k = k-str1.length();

  // cout << n << " 0 " << k << endl;

}else if(k>=str1.length()+length[n-1] && k< str1.length()+length[n-1]+str2.length()){

  // cout << "In string2";

cout << str2[k-str1.length()-length[n-1]];

break;

}else if(k>=str1.length()+length[n-1]+str2.length() &&  k< str1.length()+2*(length[n-1])+str2.length()){



  k = k-str1.length()-length[n-1]-str2.length();

   n = n-1;

  //cout << n << " 1 " << k << endl;

}else{

// cout << "In string3";
cout << str3[k-str1.length()-2*(length[n-1])-str2.length()];

break;

}








}



}


}



}

cout << endl;
// for (int i = 0; i < 60; ++i)
// {
//    code 

//   cout << length[i] << endl;
// }


}



















