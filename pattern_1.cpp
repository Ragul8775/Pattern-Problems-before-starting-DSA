#include <stdio.h>
#include <iostream>
using namespace std;
void n_forest(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
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
    n_forest(t);
    return 0;
}