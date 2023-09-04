#include<iostream>

using namespace std;

void fun(string *s){
    cout<<*s;
}

int main(){
    string s="I am learning comding.";
    fun(&s);
    return 0;
}