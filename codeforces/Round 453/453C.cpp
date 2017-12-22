//codeforces 453A.cpp
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


int h;

cin >> h;

int a[h+1];
long long sum = 0;

bool perfect = true;

int val;

for (int i = 0; i <= h; ++i)
{

cin >> a[i];

sum+=a[i];


if(i>0){

if(a[i]>=2 && a[i-1] >=2){

    perfect = false;

    val = i;


}

}



}





if(perfect){
    cout << "perfect" << endl;
}else{

cout << "ambiguous" << endl;

//printing the first tree

vector<int> v1,v2;

cout << "0 ";

deque<int> deq1,deq2;

for (int i = 1; i <= sum ; ++i)
{
    deq1.push_back(i);
    deq2.push_back(i);
}

for (int i = 1; i <= a[0]; ++i)
{
    v1.pb(i);
}

deq1.pop_front();
v2.clear();
for (int i = 1; i <= h ; ++i)
{

   for (int j = 1; j <= a[i] ; ++j)
   {
    
     int u = deq1.front();
     deq1.pop_front();

     v2.pb(u);

     cout << v1[0] << " ";



   }

v1.clear();

v1 = v2;

v2.clear();


    
}

cout << endl;

v1.clear();
v2.clear();

cout << "0 ";

for (int i = 1; i <= a[0]; ++i)
{
    v1.pb(i);
}

deq2.pop_front();
v2.clear();
for (int i = 1; i <= h ; ++i)
{

     int pos = v1.size()-1;

   for (int j = 1; j <= a[i] ; ++j)
   {
    
   

     int u = deq2.front();
     deq2.pop_front();

     v2.pb(u);

     cout << v1[pos] << " ";

   if(i==val){

     pos = 0;

   }else{

    pos=v1.size()-1;

   }


   }

v1.clear();

v1 = v2;

v2.clear();


    
}

cout << endl;







}



return 0;


}
