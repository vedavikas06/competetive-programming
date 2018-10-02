//482A.cpp
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define f first
//#define s second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define L int
#define mx 100009
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

char vall(int a){
  return 'A'+a-1;
}

int a[10][50],b[10][50],c[10][50],d[10][50];

int main() {



  ios_base::sync_with_stdio(false);

  cin.tie(NULL);
  
  int a_[4];

  cin >> a_[0] >> a_[1] >> a_[2] >> a_[3];

  // vector<pair<int,int> > v;

  // for (int i = 1; i <= 4; ++i)
  // {
  //   v.pb({a[i-1],i});
  // }

 // sort(v.begin(),v.end());
  
//   int dif = v[3].first - v[2].first;
//   int sum = v[1].first + v[0].first;


//   if(dif < sum){
  
//   int  w1 = min(v[1].first,dif);

//   int w2 =0;

//   if(w1 == v[1].first){
   
//    w2 = dif - w1;

//   }
//  // cout << w1 << " " << w2 << " " << v[0].second << endl;

//   int ac1 = v[1].first - w1;

//   int ac2 = v[0].first - w2;

//   vector<pair<int,int> > pa;

//   vector<int> ext;

//   for (int i = 0; i < v[2].first; ++i)
//   {
//     ext.pb(v[2].second);
//   }

//   for (int i = 0; i < w1; ++i)
//   {
//     ext.pb(v[1].second);
//   }

//   for (int i = 0; i < w2; ++i)
//   {
//     ext.pb(v[0].second);
//   }

//   for (int i = 1; i <= v[3].first; ++i)
//   {

//    int x = v[3].second;
//    int y = ext[i-1];

//     if(i%2==1){
    
//     pa.pb({x,y});


//   }else{

//    pa.pb({y,x});


//   }


//   }

//   int tot[2][v[3].first];

//   for (int i = 0; i < v[3].first; ++i)
//   {
//     tot[0][i] = pa[i].first;
//     tot[1][i] = pa[i].second;
//   }


// // for (int i = 0; i < 2; ++i)
// // {
// //   for (int j = 0; j < v[3].first ; ++j)
// //   {
// //     cout << tot[i][j];
// //   }
// //   cout << endl;
// // }

//   cout << "2 " << v[3].first+ac1+ac2 << endl; 
// int z1 = ac1,z2 = ac2;

// for (int i = 0; i < v[3].first; ++i)
// {
  


//   if(z2 > 0){
//     cout << val(v[0].second);
//     z2--;
//   }

//   if(z1 > 0){
//     cout << val(v[1].second);
//     z1--;
//   }

//   cout << val(tot[0][i]);


// }

// cout << endl;

// z1 = ac1,z2 = ac2;

// for (int i = 0; i < v[3].first; ++i)
// {
  


//   if(z2 > 0){
//     cout << val(v[0].second);
//     z2--;
//   }

//   if(z1 > 0){
//     cout << val(v[1].second);
//     z1--;
//   }

//   cout << val(tot[1][i]);


// }

// cout << endl;



//   }



int val = a_[3]-1;
for (int i = 1; i < 10; i+=2)
{
  for (int j = 0; j < 50 ; j+=2)
  {
    if(val>0){

    
      a[i][j] = 4;

      val--;
    

    }
  }
  
}


val = a_[0]-1;


for (int i = 1; i < 10; i+=2)
{
  for (int j = 0; j < 50 ; j+=2)
  {
    if(val>0){
      b[i][j] = 1;

       val--;
    }
  }

}


val = a_[1]-1;


for (int i = 1; i < 10; i+=2)
{
  for (int j = 0; j < 50 ; j+=2)
  {
    if(val>0){
      c[i][j] = 2;

       val--;
    }
  }
  
}

val = a_[2]-1;


for (int i = 1; i < 10; i+=2)
{
  for (int j = 0; j < 50 ; j+=2)
  {
    if(val>0){
      d[i][j] = 3;

       val--;
    }
  }
  
  }

cout << "40 50" << endl;


for (int i = 0; i < 10; i++)
{
  for (int j = 0; j < 50 ; j++)
  {
    if(a[i][j] == 0){
      cout << 'A';
    }else{
      cout << vall(a[i][j]);
    }
  }

  cout << endl;
}



for (int i = 0; i < 10; i++)
{
  for (int j = 0; j < 50 ; j++)
  {
    if(b[i][j] == 0){
      cout << 'B';
    }else{
      cout << vall(b[i][j]);
    }
  }
  
  cout << endl;
}


for (int i = 0; i < 10; i++)
{
  for (int j = 0; j < 50 ; j++)
  {
    if(c[i][j] == 0){
      cout << 'C';
    }else{
      cout << vall(c[i][j]);
    }
  }
  
  cout << endl;
}


for (int i = 0; i < 10; i++)
{
  for (int j = 0; j < 50 ; j++)
  {
    if(d[i][j] == 0){
      cout << 'D';
    }else{
      cout << vall(d[i][j]);
    }
  }
  
  cout << endl;
}





  return 0;


}
