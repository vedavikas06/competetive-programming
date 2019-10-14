class LRUCache {
public:
    list<int> l;
    unordered_map<int,pair<int,list<int>::iterator>> m;
    int cap;
    LRUCache(int capacity):cap(capacity){
        
    }
    
    int get(int key) {
        
        if(m.count(key)){
            pair<int,list<int>::iterator> p = m[key];
            l.erase(m[key].second);
            
            l.push_front(key);
            m[key] = {p.first,l.begin()};
            return p.first;
        }else{
            return -1;
        }
    }
    
    void put(int key, int value) {
        
        if(m.count(key)==0){
            if(l.size()==cap){
                int fr = l.back();
                l.pop_back();
                m.erase(fr);
            }
            
        }else{
            // pair<int,list<int>::iterator> p = m[key];
            // m.erase(key);
            l.erase(m[key].second); 
            
        }
        l.push_front(key);
        m[key] = {value,l.begin()};
        
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
