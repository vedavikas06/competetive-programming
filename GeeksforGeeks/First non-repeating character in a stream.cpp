using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        char a[n],c;
        int cnt[256]={0};
        for(int i=0;i<n;i++){
            int fnd=0;
            cin >> a[i];
            
            cnt[a[i]]++;
            for(int j=0;j<=i;j++){
                if(cnt[a[j]]==1){
                  c=a[j];
                  fnd=1;
                  break;
                }
                else{
                    continue;
                }
            }
            
            if(fnd==0){
                cout << "-1 ";
            }else{
                cout << c << " ";
            }
            
            
            
            
            
            
        }
        
        
        
        
        
        
        cout << endl;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
    
	//code
	return 0;
}
