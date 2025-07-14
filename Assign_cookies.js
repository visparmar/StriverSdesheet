var findContentChildren = function(g, s) {
    g.sort((a,b)=>a-b)
    s.sort((a,b)=>a-b)
    let greedIndex = 0;
    let cookiesIndex = 0;

    while(greedIndex < g.length && cookiesIndex < s.length){
        if(g[greedIndex] <= s[cookiesIndex]){
           greedIndex++;
           cookiesIndex++;
        }else{
            cookiesIndex++;
        }
    }  
    
    return greedIndex;
};
