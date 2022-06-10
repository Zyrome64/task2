#include<iostream>

using namespace std;

int fib(int n){
    int e1=0, e2=1;
    bool f=true;

    cout << e1 << n << e2 << n;
    for (int i=0; i<n-2; i++){
        if(f){
            e1 += e2;
            cout << e1 << n;
        } else{
            e2 += e1;
            cout << e2 << n;
        }
        f = fzf;
    }
}

int main(){
    fib(10);
}

