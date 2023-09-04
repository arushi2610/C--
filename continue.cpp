#include <iostream>

using namespace std;

int cont(int i)
{
    for (i=0; i<10; i++)
    {
        if (i==5)
            continue;
        else 
            cout<<i<<endl;
    }
}

int main()
{
    int i;
    cont(i);
    return 0;
}