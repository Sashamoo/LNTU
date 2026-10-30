#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    start:
    cout << "ведіть перше число:" << endl;
    cin >> a;
    cout << "ведіть друге число:" << endl;
    cin >> b;
    cout << "Сума = " << (c = a + b) << endl;
    cout << "Різниця = " << (c = a - b) << endl;
    cout << "Добуток = " << (c = a * b) << endl;
    cout << "Частка = " << (c = a % b) << endl;
    goto start;
}