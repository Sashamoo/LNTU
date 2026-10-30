#include <iostream>
#include <cmath>


using namespace std;


int main()
{
    int a, g = 4, l = 6, o = 7;
    double b = 10.1;
    string text = "Hello World!";
    char c1 = 'a', c2 = 'A';
    bool good = true;
    cout << "a = " << (a = 5) << endl;
    cout << "g = " << (g -= 5) << endl;
    cout << "l = " << (l %= 4) << endl;
    cout << "o = " << (o += 5) << endl;
    cout << "b = " << (b *= 5) << endl;
    cout << "правда = "<< good << endl;
    cout << "брехня = " << (good -=1)<< endl;
    cout << "корінь 25 = " << sqrt(25) << endl;
    cout << "2 в 4 степені = " << pow(2, 4) << endl;
    cout << "модуль -7 = " << abs(-7) << endl;
    cout << "приведення до більшого 3.1 = " << ceil(3.1) << endl;
    cout << "приведення до меншого 6.4 = " << floor(6.4) << endl;
    cout << "Довжина рядка: " << text.length() << endl;
    cout << "Підрядок: " << text.substr(1 , 4) << endl;
    cout << "Позиція Worid: " << text.find("World") << endl;
    cout << "Верхній регістр а = " << char(toupper(c1)) << endl;
    cout << "Нижній регістр А = " << char(tolower(c2)) << endl;
}
