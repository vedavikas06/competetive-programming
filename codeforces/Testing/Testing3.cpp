//codeforces Testing3.cpp
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

bool comp(pair<char,int> p1,pair<char,int> p2){


return p1.second > p2.second;




}




int main(){



ios_base::sync_with_stdio(false);

cin.tie(NULL);


int n;

cin >> n;

string s[n];

for (int i = 0; i < n; ++i)
{
  cin >> s[i];
}

unordered_map<char,int > m1;
vector<char> v1; 



for (int i = 0; i < n; ++i)
 {
   for (int j = 0; j < s[i].length(); ++j)
   {
    if(j==0 ){

      v1.pb(s[i][j]);

     
   }


    m1[s[i][j]]+=pow(10,s[i].length()-1-j);
   


    }


 }
 

vector<pair<char,int> > vm1;

 for (char ch = 'a'; ch<='j' ; ++ch)
 {
  if(m1[ch]!=0){
  vm1.pb(make_pair(ch,m1[ch]));

  //cout << ch << " " << m1[ch] << endl;

}

 }

 

 sort(vm1.begin(),vm1.end(),comp);


int cnt[10];

// int inti = 1;

// for (int i = 0; i < vm1.size(); ++i)
// {
//   if(find(v1.begin(),v1.end(),vm1[i].first)!=v1.end()){
 
//  cnt[vm1[i].first-'a'] = inti;

//  cout << inti << "---" << vm1[i].first << endl;

//  inti++;
//   }




// }

int first = 0,secon=1;

for (int i = 0; i < vm1.size(); ++i)
{
  if(find(v1.begin(),v1.end(),vm1[i].first)==v1.end() && first==0){
 
 cnt[vm1[i].first-'a'] = first;

  //cout << first << "---" << vm1[i].first << endl;

first++;
  }else{

cnt[vm1[i].first-'a'] = secon;

secon++;

  }


}


long long sum = 0;


for (int i = 0; i < vm1.size(); ++i)
{
  sum+=(vm1[i].second)*cnt[vm1[i].first-'a'];

    //cout << vm1[i].second << "---" << vm1[i].first << endl;

}


cout << sum << endl;




return 0;


}
