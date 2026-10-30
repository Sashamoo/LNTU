#include <iostream>

using namespace std;
int main()
{
    int a, b, c, D;
    cout << "Ведіть коофіцієнти:";
    cin >> a >> b >> c;

    D = b * b - 4 * a * c;
    cout << "Дискримінант = " << D << endl;

    if (D > 0)
        cout << " 2 корені";
    else if (D == 0)
        cout << "1 корінь";
    else
        cout << "Коренів немає";
}
