#include <iostream>

using namespace std;

int main() {
    int a = 5, b = 6, temp;
    cout<<a<<" "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;
    return 0;
}