

#include<bits/stdc++.h>
string reverseString(string str)
{
    string s;
    string ans;
    stack<string> st;
    str+=' ';
    for(int i=0;i<str.size();i++){
        
        if(str[i]!=' '){
            s+=str[i];
        }else{
            if(s!=""){
                st.push(s);
           }
            s="";
        }
    }
    while(!st.empty()){
        s=st.top();
        ans+=s;
        ans+=' ';
        st.pop();
    }
    return ans;
}
