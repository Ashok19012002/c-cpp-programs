#include <iostream>

using namespace std;

int main()
{
    int amount;
    cin >> amount;
    if (amount > 5000)
    {
        if (amount > 10000)
        {
            cout << "going with sam for long trip";
        }

        else if (amount < 10000)
        {
            cout << "going with sam for short trip";
        }
    }
    else if (amount < 5000)
    {
        cout << "go out with ashok" << endl;
    }

    return 0;
}