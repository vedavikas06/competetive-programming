using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    
	    int n,k,a;
	    cin >> k >> n;
	    vector<int> s;
	  //  unordered_set<int>::iterator it;
	    for(int i=0;i<n;i++){
	       
	       cin >> a;
	       s.push_back(a);
	       sort(s.begin(),s.end());
	        if(k-1>i){
	            cout << "-1 ";
	        }else{
	        
	            
	            cout << s[s.size()-k] << " ";
	        }
	       
	        
	        
	        
	        
	    }
	    s.clear();
	    cout << endl;
	    
	    
	    
	}
	
	
	
	
	
	return 0;
}
