#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void showList(const vector<string>& list) {
    if (list.empty()) {
        cout << "Список пуст." << endl;
        return;
    }
    cout << "Текущий список покупок:" << endl;
    for (size_t i = 0; i < list.size(); ++i) {
        cout << i + 1 << ") " << list[i] << endl;
    }
}

void saveToFile(const vector<string>& list, const string& filename) {
    ofstream file(filename);
    for (const auto& item : list) {
        file << item << endl;
    }
    file.close();
}

int main() {
    vector<string> shoppingList;
    string filename = "shopping_list.txt";
    int choice;
    string item;
    size_t index;

    do {
        cout << "\n=== Меню ===" << endl;
        cout << "1. Показать список\n2. Добавить товар\n3. Удалить товар\n4. Сохранить и выйти\nВыбор: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                showList(shoppingList);
                break;
            case 2:
                cout << "Введите товар: ";
                getline(cin, item);
                shoppingList.push_back(item);
                break;
            case 3:
                showList(shoppingList);
                cout << "Введите номер для удаления: ";
                cin >> index;
                if (index > 0 && index <= shoppingList.size()) {
                    shoppingList.erase(shoppingList.begin() + index - 1);
                } else {
                    cout << "Неверный номер." << endl;
                }
                break;
            case 4:
                saveToFile(shoppingList, filename);
                cout << "Список сохранён в файл " << filename << ". Пока!" << endl;
                break;
            default:
                cout << "Неверный выбор!" << endl;
        }
    } while (choice != 4);

    return 0;
}
