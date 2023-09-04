#include<bits/stdc++.h>

using namespace std;

char find_extra(string s1, string s2){
    int count[256] = {0};
    for (char x : s2)
        count[x]++;
    for (char x : s1)
        count[x]--;
    for (int i=0; i<256; i++)
    {
        if (count[i]==1)
            return (char)i;
            
    }
    return 0;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<find_extra(s1,s2);
    return 0;
}