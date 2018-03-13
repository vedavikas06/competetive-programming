//cff 466D.cpp
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define f first
#define s second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define mx 100009
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;




int main(){

ios_base::sync_with_stdio(false);

cin.tie(NULL);

int n;

cin >> n;

int a[n+1];

for (int i = 1; i <= n; ++i)
{
	cin >> a[i];
}

string s;

cin >> s;

int b[n+1];

for (int i = 1; i <= n ; ++i)
{
	b[i] = s[i-1] -'0';
}

vector<int> lL,lR,rL,rR;
for (int i = 5; i <= n ; ++i)
{
	if(b[i-1]==0 && b[i-2]==0 && b[i-3]==0 && b[i-4]==0 ){
     
        if(b[i]==0){
             
         lL.pb(*max_element(a+i-5+1,a+i+1));

        }else{

        lR.pb(*max_element(a+i-5+1,a+i+1)+1);

        }



	}else if(b[i-1]==1 && b[i-2]==1 && b[i-3]==1 && b[i-4]==1){
     
        if(b[i]==1){
             
         rR.pb(*min_element(a+i-5+1,a+i+1));

        }else{

        rL.pb(*min_element(a+i-5+1,a+i+1)-1);

        }



	}
}
int lLeft = pow(10,9),lRight = pow(10,9),rLeft = pow(10,9),rRight = pow(10,9);

if(!lL.empty())
lLeft = *min_element(lL.begin(),lL.end());
if(!lR.empty())
lRight = *max_element(lR.begin(),lR.end());

if(!rL.empty())
rLeft = *min_element(rL.begin(),rL.end());

if(!rR.empty())
rRight = *max_element(rR.begin(),rR.end());

//cout << lLeft << " " << lRight << " " << rLeft << " " << rRight << endl;

cout << min(lLeft,lRight) << " " << max(rLeft,rRight) << endl;




return 0;


}


