#include <iostream>

using namespace std;

int celsiusToFahrenheit(int celsius)
{
    return celsius * 9 / 5 + 32;
}

int fahrenheitToCelsius(int fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

int celsiusToKelvin(int celsius)
{
    return celsius + 273;
}

int kelvinToCelsius(int kelvin)
{
    return kelvin - 273;
}

int main()
{
    int celsius, fahrenheit;
    int result1, result2;
    int sum, average;

    cout << "Температуру в градусах Цельсія: ";
    cin >> celsius;

    cout << "Температуру в градусах Фаренгейта: ";
    cin >> fahrenheit;

    result1 = celsiusToFahrenheit(celsius);
    result2 = fahrenheitToCelsius(fahrenheit);

	cout << "Результати перетворення:" << endl;
    cout << celsius << " °C = " << result1 << " °F\n";
    cout << fahrenheit << " °F = " << result2 << " °C\n";

    sum = result1 + result2;
    average = sum / 2;

    cout << "Сума: " << sum << endl;
    cout << "Середнє значення: " << average << endl;

    cout << celsius << " °C = "
        << celsiusToKelvin(celsius) << " K\n";

    cout << celsiusToKelvin(celsius) << " K = "
        << kelvinToCelsius(celsiusToKelvin(celsius)) << " °C\n";

    return 0;
}