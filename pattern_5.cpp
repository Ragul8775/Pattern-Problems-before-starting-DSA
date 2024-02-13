#include <stdio.h>
#include <iostream>
using namespace std;
void nForest(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{

    nForest(5);
    return 0;
}