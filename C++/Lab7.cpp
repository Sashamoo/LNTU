#include <iostream>

using namespace std;

int main() {
    int height;
    char symbol;

    cout << "Введіть висоту трикутника: ";
    cin >> height;
    
    if (height <= 0) {
        cout << "Помилка: висота має бути більшою за 0!" << endl;
        return 1;
    }

    cout << "Введіть символ: ";
    cin >> symbol;

    for (int i = 0; i < height; ++i) {
        // Вивід пробілів для вирівнювання
        for (int j = 0; j < height - i - 1; ++j) {
            cout << " ";
        }

        // Вивід символів
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << symbol;
        }

        cout << '\n';
    }    

    return 0;
}