class RandomizedCollection {
public:
    /** Initialize your data structure here. */
    unordered_map< int,set<int> > mp;
    vector<int> d;
    RandomizedCollection() {
        
    }
    
    /** Inserts a value to the collection. Returns true if the collection did not already contain the specified element. */
    bool insert(int val) {
        bool present= true;
        if(mp.count(val)){
            present = false;
        }
        d.push_back(val);
        mp[val].insert(d.size()-1); 
        return present;
    }
    
    /** Removes a value from the collection. Returns true if the collection contained the specified element. */
    bool remove(int val) {
        
        if(mp.count(val)){
            int it = *mp[val].begin();
            mp[val].erase(it);
            
            int last = d.back(),pos = d.size()-1;
            d[it] = last;
            d.pop_back();
            
            mp[last].insert(it);
            mp[last].erase(pos);
            
            if(mp[val].empty()){
                mp.erase(val);
            }
            
            
            return true;
        }
        return false;
        
    }
    
    /** Get a random element from the collection. */
    int getRandom() {
        int rnd = rand() % d.size();
        
        return d[rnd];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
