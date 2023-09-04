#include<iostream>

using namespace std;

int main(){
    int a, b;
    cin>>a>>b;

    int x=min(a,b);
    int hcf=1;

    for (int i=1; i<=x; i++)
    {
        if (a%i==0 and b%i==0)
        {
            hcf=i;
        }
    }
    int lcm;
    lcm = (a*b)/hcf;
    cout<<lcm;
    return 0;
}