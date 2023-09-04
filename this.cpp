#include<bits/stdc++.h>

using namespace std;

class MyClass {
    int x=20;

    public:
    void printX(){
        cout<<this->x<<endl;
    }
};

int main(){
    MyClass MyObject;
    MyObject.printX();  
    return 0;
}