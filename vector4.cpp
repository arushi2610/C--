#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> a{10,20,30};
    a.pop_back();
    for (int x: a)
        cout<<x<<" ";
    cout<<a.front()<<" ";
    cout<<a.back();
    return 0;
}