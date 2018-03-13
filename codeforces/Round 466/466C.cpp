//cff 466C.cpp
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

int n,k;

string s;

cin >> n >> k;

cin >> s;

int len = s.length();


int a[len];

int present[26];

for (int i = 0; i < 26; ++i)
{
	present[i] = 0;
}

for (int i = 0; i < len; ++i)
{
	a[i] = s[i];
	present[s[i]-'a']++;
}

char ch = *min_element(a,a+len);

if(n<k){

cout << s ;

for (int i = 1; i <= k-n ; ++i)
{
	cout << ch; 
}

cout << endl;

}else{

string s1 = s;


//next_permutation(s1.begin(), s1.end());

int stop = -1;

for (int i = k-1; i >=0 ; i--)
{
	for (int j = s[i]-'a'+1; j < 26; j++)
	{
		if(present[j]){
			s1[i] = j+'a';
			stop = i;
   			break;
		}
	}
	if(stop>0){
		break;
	}
}

//cout << stop << endl;



for (int j = 0; j <= min(stop,k-1); ++j)
{
	cout << s1[j];
}

for ( int j= min(stop,k-1)+1; j < k; ++j)
{
	cout << ch;
}

cout << endl;




}

return 0;


}

