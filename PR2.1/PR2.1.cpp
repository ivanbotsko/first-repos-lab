#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a; // вхідний параметр
    double z1; // результат обчислення 1-го виразу
    double z2; //  результат обчислення 2-го виразу

    cout << "Enter the value of a: ";
    cin >> a; // вставлено значення для 'a'

    // Вирахування z1
    z1 = (sin(a) + sin(5 * a) - sin(3 * a)) / (cos(a) - cos(3 * a) + cos(5 * a));

    // Вираховування z2
    z2 = tan(3 * a);

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}
