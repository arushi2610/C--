#include<iostream>

using namespace std;

template <typename T>

T arrMax(T arr[], int n)
{
    T result = arr[0];
    for (int i=1; i<n; i++)
    {
        if (arr[i]>result)
            result = arr[i];
    }
    return result;
}