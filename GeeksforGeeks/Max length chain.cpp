
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/
/*You are required to complete this method*/

bool comp(struct val a,struct val b){
    if(a.first == b.first)
    return a.second < b.second;
    
    return a.first < b.first;
}
int maxChainLen(struct val p[],int n)
{
//Your code here
sort(p,p+n,comp);
vector<int> dp(n,1);

for(int i = 1;i<n;i++){
    for(int j = 0;j<i;j++ ){
        if(p[j].second < p[i].first){
            dp[i] = max(dp[i],dp[j]+1);
        }
    }
}


return *max_element(dp.begin(),dp.end());
}
