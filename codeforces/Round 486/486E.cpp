//486E.cpp
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
#define mx 1000000007
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

int cnt[10];

int main() {



  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  LL n;

  cin >> n;

  string s = to_string(n);

  //cout << s << endl;
  
  for0(i,s.length()){
    cnt[s[i]-'0']++;
  }

  if(cnt[0] >= 2 || (cnt[2]>=1 && cnt[5] >= 1) || (cnt[5]>=1 && cnt[0]>=1) || (cnt[7]>=1 && cnt[5] >= 1) ){
  
  int ming = INT_MAX;


  for (int i = 0; i < s.length(); ++i)
  {
    for (int j = i+1; j < s.length() ; ++j)
    {
      
     string sam = s;

    //first shifting the first ith digit to last but one position and second jth digit to last position.
     //swap the first zero digits with a non-zero one.
    //checking whether is it divisible by 25 ,also swapping the last 2 digits and increase the count accordingly.
      
     int cnt =0;

     for (int k = i; k < j-1; ++k)
     {
       swap(sam[k],sam[k+1]);
       cnt++;
     }

     for (int k = j; k < s.length()-1; ++k)
     {
       swap(sam[k],sam[k+1]);
       swap(sam[k-1],sam[k]);
       cnt+=2;
     }

     int pos = -1;

     for (int k = 0; k < s.length(); ++k)
     {
       if(sam[k] != '0'){
        pos = k;
        break;
       }
     }

     for (int k = pos; k > 0 ; k--)
     {
       swap(sam[k],sam[k-1]);
       cnt++;
     }

     
     if(atoll(sam.c_str())%25 == 0){
      ming = min(cnt,ming);
     }
     
     // cout << cnt << " ";
     // cout << sam << endl;

     if(s.length() >= 2){
      swap(sam[s.length()-2],sam[s.length()-1]);
      cnt++;
     

     for (int k = 0; k < s.length(); ++k)
     {
       if(sam[k] != '0'){
        pos = k;
        break;
       }
     }

     for (int k = pos; k > 0 ; k--)
     {
       swap(sam[k],sam[k-1]);
       cnt++;
     }
     
    // cout << sam << " ";

    // cout << cnt << endl;

     if(atoll(sam.c_str())%25 == 0){
      ming = min(cnt,ming);
     }


     }


    }
  }


   if(ming != INT_MAX){
    cout << ming << endl;
   }else{
    cout << "-1" << endl;
   }

  }else{
    cout << "-1" << endl;
  }





  return 0;


}
