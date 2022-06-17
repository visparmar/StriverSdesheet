int modularExponentiation(int x, int n, int m) {
	int ans=1;
    long long k=1;

    while(n)
    {if(n&1){
        ans=(ans*k*x)%m;
    }
    x=(x*k*x)%m;
    n=n>>1;
    }


    return ans;
}
