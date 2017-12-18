//codeforces
//codeforces
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

string Convert (double number){
    ostringstream buff;

    buff<<number;

    return buff.str();   
}



int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);



int n;

cin >> n;

long long a[n];


vector<long long> vSq;

vector<long long> vntSq;


long long cnt = 0;

for (int i = 0; i < n; ++i)
{
	cin >> a[i];

  long long sq = sqrt(a[i]);



if(ceil(sqrt(a[i]))==sq || a[i] ==0 || a[i] == 1){


if(a[i]==0){

	
	vntSq.pb(2);
}else{

	
    vntSq.pb(1);

}




cnt++;

}else{



long long make = min(abs(pow(ceil(sqrt(a[i])),2)-a[i]),abs(pow(floor(sqrt(a[i])),2)-a[i]));

vSq.pb(make);


}


}


if(cnt>(n/2)){

	sort(vntSq.begin(),vntSq.end());

	long long sum =0;

	for (int i = 0; i <cnt-(n/2) ; ++i)
	{
		sum+=vntSq[i];
	}


cout << sum << endl;

}else if(cnt<n/2){



sort(vSq.begin(),vSq.end());

	long long sum =0;

	for (int i = 0; i <(n/2)-cnt ; ++i)
	{
		sum+=vSq[i];
	}


cout << sum << endl;





}else{


cout << "0" << endl;

}







return 0;





}


















































































































































































































































































































