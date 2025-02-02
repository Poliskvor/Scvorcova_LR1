/* - ввести объем информации в байтах B
- выразить объем B в мегабайтах
- выразить объем B в гигабайтах */
#include <iostream>
#include <cmath> 

using namespace std;
double B;

int enterVolume(){
    cin >> B;
    return B;
}

int convertToMegabytes(double B) {
    return B / 1024;
}

double convertToGigabytes(double B) {
    return B / 1024 / 1024;
}

int main() {
    int choice;

    do {
        cout << "Меню:\n";
        cout << "1. Ввести объем информации в байтах B\n";
        cout << "2. Выразить объем B в мегабайтах\n";
        cout << "3. Выразить объем B в гигабайтах\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите объём информации в байтах: " << endl;
                enterVolume();
                break;
            case 2:
                cout << "Выразить объем B в мегабайтах: " << convertToMegabytes(B) << endl;
                break;
            case 3:
                cout << "Выразить объем B в гигабайтах: " <<  convertToGigabytes(B) << endl;
                break;
            case 0:
                cout << "Выход из программы." << endl;
                break;
            default:
                cout << "Ошибка. Попробуйте снова." << endl;
        }
    } while (choice != 0);

    return 0;
}