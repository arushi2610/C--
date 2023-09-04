#include<iostream>

using namespace std;

int fun(int &x){
    x=x+10;
    cout<<x;
}

int main(){
    int x= 30;
    fun(x);
    return 0;
}