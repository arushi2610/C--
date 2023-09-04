#include<bits/stdc++.h>

using namespace std;

class Employee {
    public:
        string id, name;
        int years;

    Employee(string id, string name, int years){
        this->id=id;
        this->name=name;
        this->years=years;
    }

    void printDetails(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Experience: "<<years<<endl;
    }
};

int main(){
    Employee info("bleh123","Arushi",1);
    info.printDetails();
    return 0;
}