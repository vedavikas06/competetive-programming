//cf 480C.cpp
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


int n,k;

cin >> n >> k;

int a[n+1];

vector<int> v[257];

for (int i = 1; i <= n ; ++i)
{
	cin >> a[i];
}

int op[n+1];

bool full[257];

for (int i = 0; i <= 256 ; ++i)
{
  full[i] = false;
}

for (int i = 1; i <= n ; ++i)
{
  
 if(v[max(0,a[i]-k+1)].empty() && v[a[i]].empty()){
 	
 	//v[max(0,a[i]-k+1)].pb(a[i]);

 	for (int j = max(0,a[i]-k+1); j <= a[i] ; ++j)
 	{
 		v[j].pb(max(0,a[i]-k+1));
 		if(a[i]-max(0,a[i]-k+1) == k-1){
        
        full[j] = true;	
    } 

 	}


 	op[i] = max(0,a[i]-k+1);
 }else if(!v[a[i]].empty()){

 op[i] = v[a[i]][0];

 }
 else{


for (int j = max(0,a[i]-k+1); j < a[i] ; j++)
{
 
  if(!full[j]){


	if(v[j].empty()){
       
      for (int k1 = j; k1 <= a[i] ; ++k1)
       {
       
        v[k1].pb(j);

        if(a[i]-j == k-1){

        	full[k1] = true;
        
        }


       }

       break;

		}else{
     
       if(k+v[j][0]-1 < a[i]){

       	continue;

       }else{

       for (int k1 = j+1; k1 <= a[i] ; ++k1)
       {
       
        v[k1].pb(v[j][0]);


       }



       if(k+v[j][0]-1 == a[i]){
        
        for (int k1 = v[j][0]; k1 <= v[j][0]+k-1; ++k1)
        {
        	full[k1] = true;
        }


       }

       break;


       }


     }

	}else{


		continue;

	}




}


if(v[a[i]].empty()){

	v[a[i]].pb(a[i]);

	op[i] = a[i];

	if(k==1){
		full[a[i]] = true;
	}

}


op[i] = v[a[i]][0];



 }



}




for (int i = 1; i <= n ; ++i)
{
	cout << op[i] << " ";
}

cout << endl;


return 0;


}
