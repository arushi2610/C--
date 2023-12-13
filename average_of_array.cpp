#include<iostream>

using namespace std;

double average(int n, int arr[])
{
    int ans=0;
    for (int i=0; i<n; i++)
    {
        ans = ans + arr[i];
    }
    return ans/n;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<average(n, arr);
}   
