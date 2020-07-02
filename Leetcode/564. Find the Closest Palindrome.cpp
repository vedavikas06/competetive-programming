class Solution {
public:
    string nearestPalindromic(string n) {
        int len = n.length();
        string minn = "";
        long long diff = LLONG_MAX;
        if(len%2==0){
            string less_one_len(len-1,'9');
            string more_one_len(len+1,'0');
            more_one_len[0] = '1',more_one_len[len] = '1';
            
            string same_len_dup = n.substr(0,len/2);
            long long left = stoll(same_len_dup);
            string rev_left = to_string(left);
            reverse(rev_left.begin(),rev_left.end());
            same_len_dup += rev_left;
            
            string same_len_incr = to_string(left+1);
            rev_left = to_string(left+1);
            reverse(rev_left.begin(),rev_left.end());
            same_len_incr += rev_left;
            
            string same_len_decr = to_string(left-1);
            rev_left = to_string(left-1);
            reverse(rev_left.begin(),rev_left.end());
            same_len_decr += rev_left;
            
            
            long long orig = stoll(n),num_less_one_len = stoll(less_one_len),num_more_one_len = stoll(more_one_len);
            
            long long num_same_len_dup = stoll(same_len_dup),num_same_len_incr = stoll(same_len_incr),num_same_len_decr = stoll(same_len_decr);
            
            if(abs(orig-num_less_one_len)<diff && n!=less_one_len){
                diff = abs(orig-num_less_one_len);
                minn = less_one_len;
                
            }
            
            if(abs(orig-num_same_len_decr)<diff && n!=same_len_decr){
                diff = abs(orig-num_same_len_decr);
                minn = same_len_decr;
                
            }
            
            if(abs(orig-num_same_len_dup)<diff && n!=same_len_dup){
                diff = abs(orig-num_same_len_dup);
                minn = same_len_dup;
                
            }
            if(abs(orig-num_same_len_incr)<diff && n!=same_len_incr ){
                
                diff = abs(orig-num_same_len_incr);
                minn = same_len_incr;
            }
            
            
            if(abs(orig-num_more_one_len)<diff && n!=more_one_len){
                diff = abs(orig-num_more_one_len);
                minn = more_one_len;
                
            }
            
            return minn;
            
        }else{
            
            if(len==1){
                if(n=="9"){
                    return "8";
                }else if(n=="0"){
                    return "1";
                }else{
                    return to_string(stoll(n)-1);
                }
            }
            
            string less_one_len(len-1,'9');
            string more_one_len(len+1,'0');
            more_one_len[0] = '1',more_one_len[len] = '1';
            
            
            
            string same_len_dup = n.substr(0,len/2 +1);
            long long left = stoll(same_len_dup.substr(0,len/2));
            string rev_left = to_string(left);
            reverse(rev_left.begin(),rev_left.end());
            same_len_dup += rev_left;
            
            left = stoll(n.substr(0,len/2 +1))+1;
            string same_len_incr = to_string(left);
            rev_left = to_string(left);
            reverse(rev_left.begin(),rev_left.end());
            same_len_incr += rev_left.substr(1);
            
            left =  stoll(n.substr(0,len/2 +1))-1;
            string same_len_decr = to_string(left);
            rev_left = to_string(left);
            reverse(rev_left.begin(),rev_left.end());
            same_len_decr += rev_left.substr(1);
            
            
            
            long long orig = stoll(n),num_less_one_len = stoll(less_one_len),num_more_one_len = stoll(more_one_len);
            
            long long num_same_len_dup = stoll(same_len_dup),num_same_len_incr = stoll(same_len_incr),num_same_len_decr = stoll(same_len_decr);
            
            if(abs(orig-num_less_one_len)<diff && n!=less_one_len){
                diff = abs(orig-num_less_one_len);
                minn = less_one_len;
                
            }
            
            if(abs(orig-num_same_len_decr)<diff && n!=same_len_decr){
                diff = abs(orig-num_same_len_decr);
                minn = same_len_decr;
                
            }
            
            if(abs(orig-num_same_len_dup)<diff && n!=same_len_dup){
                diff = abs(orig-num_same_len_dup);
                minn = same_len_dup;
                
            }
            if(abs(orig-num_same_len_incr)<diff && n!=same_len_incr ){
                
                diff = abs(orig-num_same_len_incr);
                minn = same_len_incr;
            }
            
            
            if(abs(orig-num_more_one_len)<diff && n!=more_one_len){
                diff = abs(orig-num_more_one_len);
                minn = more_one_len;
                
            }
            
            return minn;
        }
        return "0";
    }
};
