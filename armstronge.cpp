#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double sum = 0;
    int orignaln = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        // sum = sum + lastdigit*lastdigit*lastdigit;
        sum+= pow(lastdigit,3);
        n = n / 10;
    }
    if (sum == orignaln)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not Armstrong Number";
    }

    return 0;
}
