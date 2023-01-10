#include<iostream>
using namespace std;

int fib(int n){
    if(n==0){
        return 0;}
        
        if(n==1){
return 1;
    }
    int s=fib(n-1);
    int t=fib(n-2);

    return s+t;
}

int main(){
   cout<<fib(9);

    return 0;

}

