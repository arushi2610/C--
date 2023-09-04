#include<iostream>
#include<string>

using namespace std;

int main(){
    string blah="abc";
    cout<<blah.length()<<endl;
    blah = blah +"xyz";
    cout<<blah<<endl;
    cout<<blah.substr(2,4)<<endl;
    cout<<blah.find("cx");
    return 0;
}