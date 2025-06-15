#include <iostream>
using namespace std;

void showMenu() {
    cout << "\n=== Конвертер единиц ===" << endl;
    cout << "1. Км -> М\n";
    cout << "2. М -> Км\n";
    cout << "3. °C -> °F\n";
    cout << "4. °F -> °C\n";
    cout << "5. Кг -> Фунты\n";
    cout << "6. Фунты -> Кг\n";
    cout << "0. Выход\n";
}

int main() {
    int choice;
    double value;

    do {
        showMenu();
        cout << "Выберите вариант: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите км: ";
                cin >> value;
                cout << "Результат: " << value * 1000 << " м" << endl;
                break;
            case 2:
                cout << "Введите м: ";
                cin >> value;
                cout << "Результат: " << value / 1000 << " км" << endl;
                break;
            case 3:
                cout << "Введите °C: ";
                cin >> value;
                cout << "Результат: " << (value * 9/5 + 32) << " °F" << endl;
                break;
            case 4:
                cout << "Введите °F: ";
                cin >> value;
                cout << "Результат: " << ((value - 32) * 5/9) << " °C" << endl;
                break;
            case 5:
                cout << "Введите кг: ";
                cin >> value;
                cout << "Результат: " << value * 2.20462 << " фунтов" << endl;
                break;
            case 6:
                cout << "Введите фунты: ";
                cin >> value;
                cout << "Результат: " << value / 2.20462 << " кг" << endl;
                break;
            case 0:
                cout << "Выход." << endl;
                break;
            default:
                cout << "Неверный выбор!" << endl;
        }

    } while (choice != 0);

    return 0;
}
