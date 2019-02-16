{
#include<bits/stdc++.h>
using namespace std;
class LRUCache
{
public:
    LRUCache(int );
 
    int get(int );
 
    void set(int , int );
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    LRUCache *l  = new LRUCache(n);
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        string a;
        cin>>a;
        if(a=="SET")
        {
            int aa,bb;
            cin>>aa>>bb;
            l->set(aa,bb);
        }else if(a=="GET")
        {
            int aa;
            cin>>aa;
            cout<<l->get(aa)<<" ";
        }
    }
    cout<<endl;
    }
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of the class is as follows 
class LRUCache
{
public:
    LRUCache(int );
    int get(int );
    void set(int , int );
};*/
/*You are required to complete below methods */
/*Inititalize an LRU cache with size N */
int siz;
map<int,pair<list<int>:: iterator,int> > m;
list<int> u;
LRUCache::LRUCache(int N)
{
     //Your code here
     siz = N;
     
     m.clear();
     u.clear();
}
/*Sets the key x with value y in the LRU cache */
void LRUCache::set(int x, int y) 
{
     //Your code here
     if(m.find(x)==m.end()){
         if(siz==u.size()){
             int lst = u.back();
             u.pop_back();
             m.erase(lst);
         }
        
     
     }else{
         u.erase(m[x].first);
     }
     
      u.push_front(x);
      m[x] = {u.begin(),y};
     
     
     
}
/*Returns the value of the key x if 
present else returns -1 */
int LRUCache::get(int x)
{
    //Your code here
    
    if (m.find(x)!=m.end()){
       
        int y = m[x].second;
       
        u.erase(m[x].first);
     
     
        u.push_front(x);
        m[x] = {u.begin(),y};
        
        return m[x].second;
    }else{
        return -1;
    }
}
