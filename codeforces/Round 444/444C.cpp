#include <bits/stdc++.h>
using namespace std;




int main(){


ios_base::sync_with_stdio(false);
cin.tie(NULL);


int a[25];

for (int i = 1; i <= 24; ++i)
{
	cin >> a[i];
}

int b[25];

for (int i = 1; i <= 24; ++i)
{
	b[i] = a[i];
}

b[17] = a[5];
b[18] = a[6];
b[21] = a[17];
b[22] = a[18];
b[13] =a[21]; 
b[14] =a[22];
b[5] = a[13];
b[6] = a[14];

set<int> s[6];

for (int i = 1; i <= 24; ++i)
{
	s[(i-1)/4].insert(b[i]);
}
int cnt=0;
for (int i = 0; i < 6; ++i)
{
	if(s[i].size()==1){
    cnt++;
	}

	s[i].clear();
}
if(cnt==6){
	cout << "YES" << endl;
	return 0;
}

for (int i = 1; i <= 24; ++i)
{
	b[i] = a[i];
}


b[17] = a[21];
b[18] = a[22];
b[21] = a[13];
b[22] = a[14];
b[13] =a[5]; 
b[14] =a[6];
b[5] = a[17];
b[6] = a[18];



for (int i = 1; i <= 24; ++i)
{
	s[(i-1)/4].insert(b[i]);
}
cnt=0;
for (int i = 0; i < 6; ++i)
{
	if(s[i].size()==1){
cnt++;
	}

	s[i].clear();
}
if(cnt==6){
	cout << "YES" << endl;
	return 0;
}


for (int i = 1; i <= 24; ++i)
{
	b[i] = a[i];
}


b[3] = a[16];
b[4] = a[14];
b[17] = a[3];
b[19] = a[4];
b[9] =a[19]; 
b[10] =a[17];
b[14] = a[9];
b[16] = a[10];
for (int i = 1; i <= 24; ++i)
{
	s[(i-1)/4].insert(b[i]);
}
cnt=0;
for (int i = 0; i < 6; ++i)
{
	if(s[i].size()==1){
cnt++;
	}

	s[i].clear();
}
if(cnt==6){
	cout << "YES" << endl;
	return 0;
}

for (int i = 1; i <= 24; ++i)
{
	b[i] = a[i];
}




b[3] = a[17];
b[4] = a[19];
b[17] = a[10];
b[19] = a[9];
b[9] =a[14]; 
b[10] =a[16];
b[14] = a[4];
b[16] = a[3];
for (int i = 1; i <= 24; ++i)
{
	s[(i-1)/4].insert(b[i]);
}
cnt=0;
for (int i = 0; i < 6; ++i)
{
	if(s[i].size()==1){
cnt++;
	}

	s[i].clear();
}
if(cnt==6){
	cout << "YES" << endl;
	return 0;
}

for (int i = 1; i <= 24; ++i)
{
	b[i] = a[i];
}

b[15] = a[7];
b[16] = a[8];
b[7] = a[19];
b[8] = a[20];
b[19] =a[23]; 
b[20] =a[24];
b[23] = a[15];
b[24] = a[16];

for (int i = 1; i <= 24; ++i)
{
	s[(i-1)/4].insert(b[i]);
}
cnt=0;
for (int i = 0; i < 6; ++i)
{
	if(s[i].size()==1){
cnt++;
	}

	s[i].clear();
}
if(cnt==6){
	cout << "YES" << endl;
	return 0;
}



for (int i = 1; i <= 24; ++i)
{
	b[i] = a[i];
}




b[15] = a[23];
b[16] = a[24];
b[7] = a[15];
b[8] = a[16];
b[19] =a[7]; 
b[20] =a[8];
b[23] = a[19];
b[24] = a[20];

for (int i = 1; i <= 24; ++i)
{
	s[(i-1)/4].insert(b[i]);
}
cnt=0;
for (int i = 0; i < 6; ++i)
{
	if(s[i].size()==1){
cnt++;
	}

	s[i].clear();
}
if(cnt==6){
	cout << "YES" << endl;
	return 0;
}





for (int i = 1; i <= 24; ++i)
{
	b[i] = a[i];
}




b[1] = a[24];
b[3] = a[22];
b[5] = a[1];
b[7] = a[3];
b[9] =a[5]; 
b[11] =a[7];
b[22] = a[11];
b[24] = a[9];
for (int i = 1; i <= 24; ++i)
{
	s[(i-1)/4].insert(b[i]);
}
cnt=0;
for (int i = 0; i < 6; ++i)
{
	if(s[i].size()==1){
cnt++;
	}

	s[i].clear();
}
if(cnt==6){
	cout << "YES" << endl;
	return 0;
}

for (int i = 1; i <= 24; ++i)
{
	b[i] = a[i];
}



b[1] = a[5];
b[3] = a[7];
b[5] = a[9];
b[7] = a[11];
b[9] =a[24]; 
b[11] =a[22];
b[22] = a[3];
b[24] = a[1];

for (int i = 1; i <= 24; ++i)
{
	s[(i-1)/4].insert(b[i]);
}
cnt=0;
for (int i = 0; i < 6; ++i)
{
	if(s[i].size()==1){
cnt++;
	}

	s[i].clear();
}
if(cnt==6){
	cout << "YES" << endl;
	return 0;
}






for (int i = 1; i <= 24; ++i)
{
	b[i] = a[i];
}




b[2] = a[23];
b[4] = a[21];
b[6] = a[2];
b[8] = a[4];
b[10] =a[6]; 
b[12] =a[8];
b[21] = a[12];
b[23] = a[10];
for (int i = 1; i <= 24; ++i)
{
	s[(i-1)/4].insert(b[i]);
}
cnt=0;
for (int i = 0; i < 6; ++i)
{
	if(s[i].size()==1){
cnt++;
	}

	s[i].clear();
}
if(cnt==6){
	cout << "YES" << endl;
	return 0;
}


for (int i = 1; i <= 24; ++i)
{
	b[i] = a[i];
}




b[2] = a[6];
b[4] = a[8];
b[6] = a[10];
b[8] = a[12];
b[10] =a[23]; 
b[12] =a[21];
b[21] = a[4];
b[23] = a[2];
for (int i = 1; i <= 24; ++i)
{
	s[(i-1)/4].insert(b[i]);
}
cnt=0;
for (int i = 0; i < 6; ++i)
{
	if(s[i].size()==1){
cnt++;
	}

	s[i].clear();
}
if(cnt==6){
	cout << "YES" << endl;
	return 0;
}




for (int i = 1; i <= 24; ++i)
{
	b[i] = a[i];
}




b[2] = a[18];
b[4] = a[20];
b[18] = a[10];
b[20] = a[12];
b[10] =a[15]; 
b[12] =a[13];
b[15] = a[2];
b[13] = a[4];

for (int i = 1; i <= 24; ++i)
{
	s[(i-1)/4].insert(b[i]);
}
cnt=0;
for (int i = 0; i < 6; ++i)
{
	if(s[i].size()==1){
cnt++;
	}

	s[i].clear();
}
if(cnt==6){
	cout << "YES" << endl;
	return 0;
}

for (int i = 1; i <= 24; ++i)
{
	b[i] = a[i];
}




b[2]  =  a[15];
b[4]  =  a[13];
b[18] = a[2];
b[20] = a[4];
b[10] = a[18]; 
b[12] = a[20];
b[15] = a[10];
b[13] = a[12];

for (int i = 1; i <= 24; ++i)
{
	s[(i-1)/4].insert(b[i]);
}
cnt=0;
for (int i = 0; i < 6; ++i)
{
	if(s[i].size()==1){
cnt++;
	}

	s[i].clear();
}
if(cnt==6){
	cout << "YES" << endl;
	return 0;
}else{
	cout << "NO" << endl;
}


return 0;

}

