#include<iostream>

using namespace std;

int printNum(int &&x){
    cout<<x;
}

int main(){
    printNum(3);
    return 0;
}