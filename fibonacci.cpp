#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    int sum;
    if (n == 1)
    {
        cout << a << endl;
    }
    else
    {

        cout << a << endl
             << b << endl;
    }
    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        cout << sum << endl;
        a = b;
        b = sum;
    }

    return 0;
}
