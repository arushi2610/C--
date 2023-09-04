#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin>>x;
    if (x % 400 == 0)
    {
        cout<<"it is a leap year";
    }
    else if (x % 4 == 0 && x % 100 != 0)
    {
        cout<<"It is a leap year.";
    }
    else 
        cout<<"It is not a leap year.";
    return 0;
}