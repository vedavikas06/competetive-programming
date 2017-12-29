//codeforces goodbyeB.cpp
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


bool offEdge(int i,int j,int n,int m){

return (i>=1 && i<= n && j>=1 && j<=m);

}




int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);

int n,m;

cin >> n >> m;

char ch[n+1][m+1];

int sx = -1,sy = -1;


for (int i = 1; i <= n ; ++i)
{
	for (int j = 1; j <= m ; ++j)
	{
		cin >> ch[i][j];

		if(ch[i][j]== 'S'){

			sx = i;
			sy = j;

		}


	}


}

//cout << sx << sy << endl;

char my[] = {'0','1','2','3'};

string s;

cin >> s;

int ux = -1,uy =0,lx=0,ly=-1,rx=0,ry=1,dx=1,dy=0;

int cnt = 0,cnt1=0;

 do {
    char u = my[0],l=my[1],r=my[2],d=my[3];

    int fx = sx,fy=sy;

    int val = 0;

    //cout << u << l << r << d << endl;

    for (int i = 0; i < s.length(); ++i)
    {
    	 
    	 if(s[i] == u ){

    	 	fx+=ux;
    	 	fy+=uy;


    	 }else if(s[i] == l ){

    	 	fx+=lx;
    	 	fy+=ly;

    	 }else if(s[i] == r ){

    	 	fx+=rx;
    	 	fy+=ry;

    	 }else if(s[i] == d ){

    	 	fx+=dx;
    	 	fy+=dy;

     
    	 }

    	// cout << fx << fy << endl;

    	 if(offEdge(fx,fy,n,m) && (ch[fx][fy] == '.' || ch[fx][fy] == 'S') ){

    	 	continue;
    	 
    	 }else if(offEdge(fx,fy,n,m) && ch[fx][fy] == 'E'){

        val = 1;

        cnt++;
       
       break;

    	 }else {

    	 	val = 1;

    	 	break;

    	 }
    	





    }

    if(val == 1){

    	continue;

    }
 




  } while ( next_permutation(my,my+4) );



cout << cnt << endl;











return 0;


}
