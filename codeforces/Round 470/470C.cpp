//cff 470C.cpp
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

LL v[n],t[n],tC[n];

for (int i = 0; i < n; ++i)
{
    cin >> v[i];
}

for (int i = 0; i < n; ++i)
{
    cin >> t[i];

    tC[i] = t[i];
    
    if(i>0){

        tC[i]+=tC[i-1];

    }

}

for (int i = 0; i < n-1; ++i)
{
    v[i+1] += tC[i];
}

// for (int i = 0; i < n; ++i)
// {
//     cout << v[i] << " ";
// }
// cout << endl;
// for (int i = 0; i < n; ++i)
// {
//     cout << tC[i] << " ";
// }
// cout << endl;

multiset<LL> m;

for (int i = 0; i < n; ++i)
{
    
     
    if(i>0){ 

    m.insert(v[i]);    
    LL bef = tC[i-1];
    
    LL aft = tC[i];

    LL tot = 0;

    multiset<LL>::iterator itr;


    for (itr = m.begin(); itr != m.end(); ++itr)
    {
        if(*itr>=tC[i]){
            break;
        }else{

            tot += (*itr - bef);

        }
    }

    m.erase(m.begin(),m.lower_bound(tC[i]));

    cout << tot+((m.size())*t[i]) << " ";

    }else{

    cout << min(v[i],tC[i]) << " ";
    
    if(v[i]>tC[i]){

      m.insert(v[i]);
     
     }
    
    }



}

cout << endl;



return 0;


}



