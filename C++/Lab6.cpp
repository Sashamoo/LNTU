#include <iostream>

using namespace std;

int main() {
    double a, b, c, d;
    string povtor;

    do {
        cout << "Ведіть коефіцієнти рівняння:\n";
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << "c = ";
        cin >> c;

        if (a == 0) {
            cout << "Коефіцієнт а дорівнює 0.\n";
            cout << "Рівняння не є квадратним.\n";
        } else {
            d = b * b - 4 * a * c;

            if (d >= 0) {
                cout << "Це рівняння має дійсні корені.\n";
            } else {
                cout << "Дискримінант від'ємний.\n";
                cout << "Рівняння дійсних розв'язків не має.\n";
            }
        }

        cout << "<Бажаєте повторити введення? (т/н): ";
        cin >> povtor;

    } while (povtor == "т" || povtor == "Т" || povtor == "y" || povtor == "Y");

    cout << "Роботу програми завершено\n";
    return 0;
}