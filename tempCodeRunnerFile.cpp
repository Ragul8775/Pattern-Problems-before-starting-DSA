#include <iostream>
using namespace std;
void n_pattern(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n = 3;
    n_pattern(n);
    return 0;
}