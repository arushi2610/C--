#include<iostream>

using namespace std;

void increment(int *x){
    (*x)++;
}

int main(){
    int x= 5;
    cout<<"x before increment: "<<x;
    increment(&x);
    cout<<"x after increment: "<<x;
    return 0;
}