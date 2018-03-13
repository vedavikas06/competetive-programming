//cff 470B.cpp
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



long long maxPrimeFactors(long long n)
{
    // Initialize the maximum prime factor
    // variable with the lowest one
    long long maxPrime = -1;
 
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        maxPrime = 2;
        n >>= 1; // equivalent to n /= 2
    }
 
    // n must be odd at this point, thus skip
    // the even numbers and iterate only for
    // odd integers
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
    }
 
    // This condition is to handle the case 
    // when n is a prime number greater than 2
    if (n > 2){
        maxPrime = n;
    }
 
    return maxPrime;
}
 



int main(){

ios_base::sync_with_stdio(false);

cin.tie(NULL);

int x2;

cin >> x2;

long long  lx1,rx1;

lx1 = x2 - maxPrimeFactors(x2) +1;

rx1 = x2;

long long min1 = INT_MAX;

for (long long i = lx1 ; i <= rx1 ; ++i)
{
	

if(i != maxPrimeFactors(i)){
  
long long  lx0,rx0;

lx0 = i - maxPrimeFactors(i) +1;

rx0 = i;

min1 = min(min(lx0,rx0),min1);

}


}


cout << min1 << endl;

return 0;


}



