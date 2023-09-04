#include <bits/stdc++.h>

using namespace std;

int digit(int n)
{
    while (n >= 10)
    {
        n = n /10;
    }
    cout<<n;
}

int main(){
    int n;
    cin>>n;
    digit(n);
    return 0;
}