

#include <bits/stdc++.h> 

   int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
   }
int romanToInt(string s) {
  
    int sum=0,s1,s2;
    
    for(int i=0;i<s.size();i++){
        
        s1=value(s[i]);
        
        if(i+1<s.size()){
            s2=value(s[i+1]);
            
            if(s2>s1){
                sum+=(s2-s1);i++;
            }else{
                sum+=s1;
            }
        }else{
            sum+=s1;
        }
        
        
    }
    return sum;
}
