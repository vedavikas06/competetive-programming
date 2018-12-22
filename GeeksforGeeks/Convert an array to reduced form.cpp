using namespace std;




int main(){
    
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        
        int n;
        cin >> n;
        int a[n],b[n]={0};
        
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        
        for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
            
            if(a[i]>=a[j]){
             b[i]++;   
            }
        }
           
        }
        
        
         for(int i=0;i<n;i++){
            cout << b[i]-1 << " ";
        }
        
        
        
        
        
        cout << endl;
        
        
        
    }
    
    
}




