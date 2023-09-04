#include<iostream>

using namespace std;

int main(){
    int arr[]= {43,45,4,52,5,3};
    cout<<"Traversing:";
    for (auto x:arr)
    cout<<x<<endl;
    return 0;
}