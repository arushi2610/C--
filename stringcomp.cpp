#include<iostream>

using namespace std;

int main(){
    string str="blahblahblah";
    int res = str.find("ah");
    if (res == string ::npos)
        cout<<"Not present";
    else 
        cout<<"present at index: "<<res;
    return 0;
}