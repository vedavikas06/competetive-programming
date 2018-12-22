using namespace std;
bool comp(char a,char b){
    return a<b;
}
int main() {
    
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        
       int n;
       cin >> n;
       string s;
       cin >> s;
       vector<char> v1,v2;
       
       for(int i=0;i<n;i++){
           
           if(s[i]>=97){
               v1.push_back(s[i]);
               
           }else{
             v2.push_back(s[i]);  
           }
           
           
       }
        sort(v1.begin(),v1.end(),comp);
        sort(v2.begin(),v2.end(),comp);
           
         for(int i=0;i<n;i++){
           
           if(s[i]>=97){
               cout << v1.front();
              v1. erase(v1.begin());
               
           }else{
               cout << v2.front();
               v2.erase(v2.begin());
           }
         }
        
        cout << endl;
        
        
    }
        
    
    
    
    
    
	return 0;
}



