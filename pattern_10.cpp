#include <iostream>
using namespace std;
void n_pattern(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        cout << "*";
        cout << endl;
    }
}
int main()
{
    int n = 3;
    n_pattern(n);
    return 0;
}