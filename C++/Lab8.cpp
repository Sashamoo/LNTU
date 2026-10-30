#include <iostream>
#include <cstdlib>
#include <termios.h>
#include <unistd.h>

using namespace std;

char getch_linux() {
    struct termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO); 
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    char ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

int main() {
    
    int size;
    cout << "Введіть розмір масиву: ";
    cin >> size;

    
    char symbol;
    cout << "Введіть символ для позначення позиції: ";
    cin >> symbol;

    char arr[100];
    for (int i = 0; i < size; i++) {
        arr[i] = '-';
    }

    int index = 0; 

    while (true) {
        system("clear"); 
        cout << "Масив: ";
        for (int i = 0; i < size; i++) {
            if (i == index) {
                cout << symbol << " "; 
            } else {
                cout << arr[i] << " ";
            }
        }
        cout << "\nПоточний індекс: " << index << "\n";
        cout << "\nКеруйте стрілочками [<-] / [->]. Для виходу натисніть [E].\n";

        
        char ch = getch_linux();

      
        if (ch == 'e' || ch == 'E') {
            break; 
        }

     
        if (ch == 27) {       
            getch_linux();      
            char arrow = getch_linux(); 

            if (arrow == 'D') { 
                if (index > 0) index--;
            } 
            else if (arrow == 'C') { 
                if (index < size - 1) index++;
            }
        }
    }

    cout << "\nПрограму завершено.\n";
    return 0;
}