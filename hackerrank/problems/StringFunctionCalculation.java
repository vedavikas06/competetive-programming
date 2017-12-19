import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        Scanner sc= new Scanner(System.in);
        
        String s=sc.next();
        int len = s.length(),max=0,imax;
        
        
        for(int i=0;i<len;i++){
            for(int j=i;j<len;j++){
                
               
            String findStr = s.substring(i,j+1);
            int lastIndex = 0;
            int count = 0;

           while(lastIndex != -1){

          lastIndex = s.indexOf(findStr,lastIndex);

            if(lastIndex != -1){
           count++;
          lastIndex++;
              }
          }
             // System.out.println(count);
              imax = count*findStr.length();  
                if(max < imax ){
                    max=imax;
                }
                
                
            }
            
            
            
        }
        
        
        
        
        
        System.out.println(max);
        
    }
}
