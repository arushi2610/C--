#include<iostream>

using namespace std;

void dhundo (string text, string pattern) {
    int found = text.find(pattern);
    while (found != string::npos)
    {
        cout<<"Pattern found at: "<<found<<"\n";
        found = text.find(pattern, found + 1);
    }
}

int main(){
    string text, pattern;
    cin>>text>>pattern;
    dhundo(text,pattern);
    return 0;
}