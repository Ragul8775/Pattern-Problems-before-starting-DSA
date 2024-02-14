#include <stdio.h>
#include <iostream>
using namespace std;
void nForest(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{

    nForest(5);
    return 0;
}