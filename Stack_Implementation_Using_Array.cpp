//Stack_Implementation_Using_Array Coding Ninza problem solution


#include <bits/stdc++.h> 
// Stack class.
class Stack {
 private:
 int size=0;
 int *stack;
 int topp=-1;

public:
    
    Stack(int capacity) {
        size=capacity;
       stack= new int[capacity];
        // Write your code here.
    }

    void push(int num) {
        if(topp==size-1){
//stack is full
        }else{
         topp++;
        stack[topp]=num;
        }
       
        // Write your code here.
    }

    int pop() {
        if(topp==-1){
            return -1;
        }
        else{
int tmp=stack[topp];
        topp--;
        return tmp;
        }
        
        
        // Write your code here.
    }
    
    int top() {
        if(topp==-1){
            return topp;
        }else
        return stack[topp];
        // Write your code here.
    }
    
    int isEmpty() {
        if(topp==-1){
            return 1;
        }else{
            return 0;
        }
        // Write your code here.
    }
    
    int isFull() {
        if(topp==size-1){
            return 1;
        }else{
            return 0;
        }
        // Write your code here.
    }
    
};
