#include <stdio.h>
#include <iostream>
using namespace std;
void nForest(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    nForest(t);
    return 0;
}