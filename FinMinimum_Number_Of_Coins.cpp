


#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    int cnt=0;
    while(amount>0){
        
        if(amount>=1000){
            amount=amount-1000;
        }
        else if(amount>=500){
            amount=amount-500;
        }
        else if(amount>=100){
            amount=amount-100;
        }
        else if(amount>=50){
            amount=amount-50;
        }
        else if(amount>=20){
            amount=amount-20;
        }
        else if(amount>=10){
            amount=amount-10;
        }
        else if(amount>=5){
            amount=amount-5;
        }
        else if(amount>=2){
            amount=amount-2;
        }
        else if(amount>=1){
            amount=amount-1;
        }
        
        
        cnt++;
        
    }
    return cnt;
}
