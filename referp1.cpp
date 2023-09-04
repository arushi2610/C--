#include<iostream>

using namespace std;

int main(){
    int x=10, y=20;
    int &z=x;
    cout<<x<<" "<<z<<endl;
    z=y;
    cout<<x<<" "<<z<<endl;
    z=z+5;
    cout<<x<<" "<<y<<" "<<z;    
    return 0;
}