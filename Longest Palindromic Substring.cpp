
string longestPalinSubstring(string s)
{
    
        int n=s.length();
        int low,high;
        
        int strIndex=0;
        int len=1;
        
        
        for(int i=1;i<n;i++)
        {
            
            // even case.......
            low=i-1;
            high=i;
            
            while(low>=0 && high<n && s[low]==s[high])
            {
                if(high-low+1>len)
                {
                    strIndex=low;
                    len=high-low+1;
                }
                low--;
                high++;
                
                
            }
            
            //odd case..............
            low=i-1;
            high=i+1;
               while(low>=0 && high<n && s[low]==s[high])
            {
                if(high-low+1>len)
                {
                    strIndex=low;
                    len=high-low+1;
                }
                low--;
                high++;
                
                
            }
 
        }
        return (s.substr(strIndex,len));
        
}
