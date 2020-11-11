class Solution {
public:    
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end(), 
             [](int &s1, int &s2){ 
                 return to_string(s1)+to_string(s2)>to_string(s2)+to_string(s1);
            }
        );
        
        string result = "";
        for(int num: nums){
            result += to_string(num);
        }
        
        // cout << result.size() << endl;
        int totLen = result.length();
        int st = -1;
        for(int i=0;i<totLen;i++){
            if(result[i] == '0' && st == i-1){
                st++;
            }else{
                return result.substr(i);
            }
        }
        
        return "0";
    }
};
