#include <bits/stdc++.h>

using namespace std;

string int_to_str(int num)
{
    stringstream ss;

    ss << num;

    return ss.str();
}

int str_to_int(string str)
{
    stringstream ss(str);

    int num;
    ss >> num;

    return num;
}

int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);

int k;

long long p;

cin >> k >> p;

long long init =0;

vector<long long> v;

for (int i = 1; i <= k; ++i)
{

	long long ans = i*pow(10,(floor(log10(i))+1));

	string str = int_to_str(i);

   reverse(str.begin(),str.end());

   int my = str_to_int(str);

  ans+=my;

  

  v.push_back((init+ans)%p);

  init=(init+ans);

}


cout << v[k-1]%p << endl;




}























































