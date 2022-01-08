#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    char op;
    cout << "enter the two number  ";
    cin >> n1 >> n2;
    cout << "enter the operator  ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        cout << n1 / n2;
        break;

    default:
        cout << "enter the correct operator";
        break;
    }

    return 0;
}