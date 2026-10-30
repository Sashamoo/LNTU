#include <iostream>

using namespace std;

int main()
{
    float balance = 0;
    float amount;
    int choice;
    int pin = 1111, newPin, oldPin, inputPin;

    cout << "Ведіть PIN-код" << endl;
    cin >> inputPin;

    if (inputPin == pin)
    {
        cout << "PIN-код правильний";
        while (true)
        {
            cout << "Банкомат\n";
            cout << "1. Переглянути баланс\n";
            cout << "2. Внести кошти\n";
            cout << "3. Зняти кошти\n";
            cout << "4. Вийти\n";
            cout << "5. Змінити PIN-код\n";
            cout << "Номер операції:";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Ваш баланс: " << balance << " грн\n";
                break;
            case 2:
                cout << "Ведіть суму поповнення коштів\n";
                cin >> amount;
                if (amount < 0)
                {
                    cout << "Помилка: сума не може бути від'ємною.\n";
                }
                else
                {
                    balance += amount;
                    cout << "Баланс становить:" << balance << " грн\n";
                }
                break;
            case 3:
                cout << "Ведіть суму зняття коштів\n";
                cin >> amount;

                if (amount < 0)
                {
                    cout << "Помилка: сума не може бути від'ємною.\n";
                }
                else if (amount > balance)
                {
                    cout << "Помилка: недостатньо коштів.\n";
                }

                else
                {
                    balance -= amount;
                    cout << "Кошти успішно знято.\n";
                    cout << "Баланс становить:" << balance << " грн\n";
                }

                break;
            case 4:
                cout << "Роботу завершено\n";
                return 0;
            case 5:
                cout << "Ведіть старий PIN-код:\n";
                cin >> oldPin;

                if (oldPin == pin)
                {
                    cout << "Ведіть новий PIN-код:\n";
                    cin >> newPin;
                    pin = newPin;
                    cout << "PIN-код успішно змінено\n";
                }
                else
                {
                    cout << "Помилка: неправильний PIN-код\n";
                }

                break;

            default:
                cout << "Помилка: введіть цифру від 1 до 5.\n";

            }

        }
    }
    else
    {
        cout << "Помилка: неправильний PIN-код";
    }

}