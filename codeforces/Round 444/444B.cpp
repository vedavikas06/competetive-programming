#include <bits/stdc++.h>
using namespace std;




int main(){


ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,a;

cin >> n;

vector<int> v[n];

for (int i = 0; i < n; ++i)
{

for (int j = 0; j < 6; ++j)
{
	
	cin >> a;

v[i].push_back(a);



}

sort(v[i].begin(),v[i].end());

}


// for (int i = 0; i < n; ++i)
// {

// for (int j = 0; j < 6; ++j)
// {
	
// 	cout << v[i][j] << endl;



// }



// }

set<int> s;

if(n==1){
for (int i = 0; i < 6; ++i)
{
	s.insert(v[0][i]);
}

}else if(n==2){

for (int i = 0; i < 6; ++i)
{
	for (int j = 0; j < 6; ++j)
	{
		
			s.insert(v[0][i]*10+v[1][j]);
		    s.insert(v[1][j]*10+v[0][i]);
	}
}

for (int i = 0; i < 2; ++i)
{
	for (int j = 0; j < 6; ++j)
	{
		
	
	s.insert(v[i][j]);

}

}


}else if(n==3){


for (int i = 0; i < 6; ++i)
{
	for (int j = 0; j < 6; ++j)
	{
		for (int k = 0; k < 6; ++k)
		{
			
		
		
			s.insert(v[0][i]*100+v[1][j]*10+v[2][k]);
		    s.insert(v[0][i]*100+v[2][k]*10+v[1][j]);
		    s.insert(v[1][j]*100+v[0][i]*10+v[2][k]);
		    s.insert(v[1][j]*100+v[2][k]*10+v[0][i]);
            s.insert(v[2][k]*100+v[1][j]*10+v[0][i]);
		    s.insert(v[2][k]*100+v[0][i]*10+v[1][j]);


		}
	}
}

for (int i = 0; i < 6; ++i)
{
	for (int j = 0; j < 6; ++j)
	{
		s.insert(v[0][i]*10+v[1][j]);
		    s.insert(v[1][j]*10+v[0][i]);
	}
}

for (int i = 0; i < 6; ++i)
{
	for (int j = 0; j < 6; ++j)
	{
		s.insert(v[1][i]*10+v[2][j]);
		    s.insert(v[2][j]*10+v[1][i]);
	}
}
for (int i = 0; i < 6; ++i)
{
	for (int j = 0; j < 6; ++j)
	{
		s.insert(v[0][i]*10+v[2][j]);
		    s.insert(v[2][j]*10+v[0][i]);
	}
}

for (int i = 0; i < 6; ++i)
{
	s.insert(v[0][i]);
}
for (int i = 0; i < 6; ++i)
{
	s.insert(v[1][i]);
}
for (int i = 0; i < 6; ++i)
{
	s.insert(v[2][i]);
}





}




for (int i = 1; i <=999; ++i)
{
	if(s.find(i)==s.end()){
		cout << i-1 << endl;
		break;
	}
}



return 0;

}











