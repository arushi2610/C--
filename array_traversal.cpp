#include<iostream>

using namespace std;

int main(){
    int numbers[] = {4,55,5,45,5,53,6,255,431};
    int n=sizeof(numbers)/sizeof(numbers[0]);
    for (int i=0; i<n; i++)
    {
        numbers[i];
        cout<<numbers[i]<<endl;
    }
    return 0;
}
