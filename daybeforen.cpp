#include <bits/stdc++.h>

using namespace std;

void utility(int d, int n) {
    int result = (d - n) % 7;
    if (result < 0) {
        result += 7;
    }
    cout<<result<<endl;
}

int main() {
    int d,n;
    cin>>d>>n;
    utility(d,n);
}