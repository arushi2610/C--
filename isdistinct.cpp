#include<iostream>

using namespace std;

int isDistinct(int arr[], int n)
{
    int count=0;
    bool is_different = true;
    for (int i=0; i<n; i++)
    {
        is_different = true;
        for (int j=i-1; j>=0; j--)
        {
            if (arr[i]==arr[j])
            {
                is_different=false;
                break;
            }
        }
        if (is_different==true)
        {
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<isDistinct(arr,n);
    return 0;
}