//swap.cpp good problem to solve in spoj.
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



const int N = 5e4;

const int rtn = 1000;

int start[rtn],finish[rtn], bkt[250001];

int bit[rtn][N+1] = {0};


int getSum(int i, int index)
{
    int sum = 0; // Initialize result
 
    // Traverse ancestors of BITree[index]
    while (index > 0)
    {
        // Add current element of BITree to sum
        sum += bit[i][index];
 
        // Move index to parent node in getSum View
        index -= index & (-index);
    }
    return sum;
}


void updateBIT(int i, int index, int val)
{
    // Traverse all ancestors and add 'val'
    while (index <= N)
    {
       // Add 'val' to current node of BI Tree
       bit[i][index] += val;
 
       // Update index to that of parent in update View
       index += index & (-index);
    }
}




int calc(int l, int r, int val,int arr[])
{
    

int sum = 0;

for (int i = bkt[l]; i <= bkt[r] ; ++i)
{
    if(start[i]>=l && finish[i] <= r){
  
  sum += getSum(i,val-1);

    }else{

  for (int j = max(l,start[i]); j <=  min(finish[i],r); ++j)
  {
      if(arr[j]<val){

        sum++;
      
      }
  
  }



    }


}

return sum;



}





int main(){



ios_base::sync_with_stdio(false);

cin.tie(NULL);


int n;

cin >> n;

int arr[n+1];

for (int i = 1; i <= n; ++i)
{
	cin >> arr[i];
}


long long val = 0;


//this is done 0th bit row so no proble as we ll continue it from 1 fron next
 for (int i=n; i>=1; i--)
    {

        val += getSum(0,arr[i]-1);
 
        updateBIT(0, arr[i], 1);
    }



int i = 1,j =1,cnt = 1;

while(i<=n){

j = i;

start[cnt] = i;

while(j<= n && j < i + rtn){

bkt[j] = cnt;

updateBIT(cnt,arr[j],1);

j++;


}

finish[cnt] = j-1;

i = j;

cnt++;

}



int q;

cin >> q;



int x,y;

for (int i = 0; i < q; ++i)
{
	
cin >> x >> y;

int old1 =x-1-calc(1,x-1,arr[x]+1,arr);

old1 += calc(x+1,n,arr[x],arr);

updateBIT(bkt[x],arr[x],-1);

updateBIT(bkt[x],y,1);

arr[x] = y;

int new1 =x-1-calc(1,x-1,y+1,arr);

new1 += calc(x+1,n,y,arr);

val=val-old1+new1;

cout << val << endl;


}




return 0;


}
