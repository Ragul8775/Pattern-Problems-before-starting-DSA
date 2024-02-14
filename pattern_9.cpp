#include <stdio.h>
#include <iostream>
using namespace std;
void nForest(int n)
{
    int space = n - 1;

    // run loop (parent loop)
    // till number of rows
    for (int i = 0; i < n; i++)
    {
        // loop for initially space,
        // before star printing
        for (int j = 0; j < space; j++)
            cout << " ";

        // Print i+1 stars
        for (int j = 0; j <= i; j++)
            cout << "* ";

        cout << endl;
        space--;
    }
}

int main()
{

    nForest(5);
    return 0;
}