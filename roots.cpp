#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, discriment;
    cout << "If the Quadratic Equation is " << endl;
    cout << "ax^2 + bx + c" << endl;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    cout << "Enter the value of c" << endl;
    cin >> c;
    discriment = b * b - 4 * a * c;

    if (discriment > 0)
    {
        cout << "The first root is x1 = " << (-b + sqrt(discriment)) / 2 * a << endl;
        cout << "The seconed root is x2 = " << (-b - sqrt(discriment)) / 2 * a << endl;
    }
    else if (discriment == 0)
    {
        cout << "The roots are x1 = x2 = " << -b / 2 * a << endl;
    }
    else if (discriment < 0)
    {
        cout << "The roots is x1 = " << -b / 2 * a << "+" << sqrt(abs(discriment)) / 2 * a << "i" << endl;
        cout << "The roots is x2 = " << -b / 2 * a << "-" << sqrt(abs(discriment)) / 2 * a << "i" << endl;
    }

    return 0;
}