/*
Design a data structure that supports the following two operations:

void addWord(word)
bool search(word)
search(word) can search a literal word or a regular expression string containing only letters a-z or .. A .
means it can represent any one letter. */

class WordDictionary {
public:
    bool end;
    WordDictionary *child[26];
    
    /** Initialize your data structure here. */
    WordDictionary() {
        for(int i=0;i<26;i++){
            this->child[i] = NULL;
        }
        end = false;
        
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        WordDictionary *temp = this;
        for(int i=0;i<word.length();i++){
            if(temp->child[word[i]-'a']){
                temp = temp->child[word[i]-'a'];
            }else{
                temp->child[word[i]-'a'] = new WordDictionary;
                temp = temp->child[word[i]-'a'];
            }
            
        }
        
        temp->end = true;
        
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        
        
      if(word.length()==0){
          if(end){
              return true;
          }else{
              return false;
          }
      }
            
      if(word[0]!='.'){
          if(this->child[word[0]-'a']){
              return this->child[word[0]-'a']->search(word.substr(1));
          }else{
              return false;
          }
      }else{
          for(int i=0;i<26;i++){
              if(this->child[i] && this->child[i]->search(word.substr(1))){
                  return true;
              }
          }
                
                
            }
        
        return false;

        
    }
    
    
    
    
    
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
