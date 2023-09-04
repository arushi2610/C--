#include<iostream>

using namespace std;

struct Student {
    int rollno;
    string name;
    string address;
};

int main(){
    Student s = {6, "Arushi", "Gurjepal Nagar"};
    cout<<s.rollno<<endl;
    cout<<s.name<<endl;
    cout<<s.address;
    return 0;
}