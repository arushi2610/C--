#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    vector<int> v;
    vector<int> odd;
    vector<int> even;

    cin>>n;

    while (n--)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }

    for (int i=0; i<v.size();i++)
    {
        if (v[i]%2==0)
            even.push_back(v[i]);
        else 
            odd.push_back(v[i]);
    }
    for (int i=0; i<odd.size();i++)
    {
        cout<<odd[i]<<" ";
    }
    cout<<"\n";

    for (int i=0; i<even.size();i++)
    {
        cout<<even[i]<<" ";
    }
    return 0;
}