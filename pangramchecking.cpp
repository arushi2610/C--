#include<iostream>
#include<string>

using namespace std;

bool is_pangram(string s){
    int letters_seen[26]={0};
    for (int i=0; i<s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }

    for (int i=0; i<s.size();i++)
    {
        if (isalpha(s[i]))
        {
            letters_seen[s[i]- 'a']++;
        }
    }
    for (int i=0; i<26; i++)
    {
        if (letters_seen[i]==0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    string s="The quick brown fox jumps over the lazy dog.";
    if (is_pangram(s))
    {
        cout<<s<<" is a pangram.";
    }
    else
        cout<<s<<" is not a pangram.";
    return 0;
}