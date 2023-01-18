#include <iostream>

using namespace std;

int main()
{
    int ll, ul, count = 0, m = 0;
    cout << "enter lower limit";
    cin >> ll;
    cout << "enter upper limit";
    cin >> ul;
    for (int i = ll; i <= ul; i++)
    {

        for (int j = 2; j < (i/2); j++)
        {
            if (i == 0 || i == 1)
            {
                m = 1;
                break;
            }
            if (i % j == 0)
            {
                m = 1;
                break;
            }
        }
        if (m == 0)
        {
            cout << i << "\n";
        }
    }

    return 0;
}
