#include <bits/stdc++.h>
using namespace std;




int main(){


ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;

cin >> s;

int i,cnt = 0;

for (i = s.length()-1; i >=0 ; i--)
{
	
if(s[i]=='0'){

cnt++;

}
if(cnt>=6){

	break;

}

}


if(cnt < 6){

	cout << "no" << endl;
	return 0;
}
else{

for(int j = i-1;j>=0;j--){


if(s[j]=='1'){
	cout << "yes" << endl;
	return 0;
}


if(j==0){
	cout << "no" << endl;
	return 0;
}

}

}


cout << "no" << endl;


return 0;

}
