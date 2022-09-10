#include <iostream>
using namespace std;

int main()
{

    int t, n, sumOfn, sumOsqr;

    cin >> t;

    while (t--)
    {
        cin >> n;

        sumOfn = n * (n + 1) / 2;
        sumOsqr = (n * (n + 1) * (2 * n + 1)) / 6.;

        if (sumOfn % sumOsqr == 0)
        {
            cout << "YES " << sumOfn % sumOsqr << "\n";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}