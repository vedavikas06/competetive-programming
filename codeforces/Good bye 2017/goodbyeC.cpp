//codeforces goodbyeC.cpp
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

int n;
double r;
cin >> n >> r;

double x[n+1];

for (int i = 1; i <= n ; ++i)
{

    cin >> x[i];

}

double rx[n+1],ry[n+1];

rx[1] = x[1];
ry[1] = r;

for (int i = 2; i <= n; ++i)
{
    double maxy = -1;
    
 for (int j = 1; j < i; ++j)
 {

      if((x[i]+2*r>=rx[j] && x[i] <= rx[j]) || (x[i]<=(rx[j]+2*r) && x[i] >= rx[j]) ){

     maxy = max(maxy,max(ry[j]+sqrt(4*r*r - pow(rx[j]-x[i],2) ),ry[j]-sqrt(4*r*r - pow(rx[j]-x[i],2) ) ) );

 }


 }

 if(maxy == -1){

    maxy = r;
 }

rx[i] = x[i];

ry[i] = maxy;


}

for (int i = 1; i <= n ; ++i)
{
    cout << fixed << setprecision(9) << ry[i] << " ";
}

cout << endl;



return 0;


}
