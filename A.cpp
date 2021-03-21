
#include <iostream>
using namespace std;

bool isPrime(int x)
{
    bool truth = false;
    int l = x / 2 + 1;

    for (int i = 2; i < l; i++)
    {
        if (x % i == 0)
            truth = true;
    }
    return truth;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        int p1 = 0;
        int p2 = 0;
        int x = 1 + d;
        while (true)
        {
            if (isPrime(x))
            {
                p1 = x;
                break;
            }
            x++;
        }

        x = p1 + d;

        while (true)
        {
            if (isPrime(x))
            {
                p2 = x;
                break;
            }
            x++;
        }

        cout << p1 * p2 << "\n";
    }
}