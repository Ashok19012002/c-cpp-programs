#include <iostream>

using namespace std;

int main()
{
    int PocketMoney = 3000;
    for (int date = 1; date <= 30; date++)
    {

        if (date % 2 == 0)
        {
            continue;
        }
        if (PocketMoney == 0)
        {
            break;
        }
        PocketMoney = PocketMoney - 300;
        cout << date << ".you can go for party!" << endl;
    }

    return 0;
}