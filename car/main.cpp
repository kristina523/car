#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    string color;
    int mileage;

public:
    Car(string brand, string model, int year, string color, int mileage) {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->color = color;
        this->mileage = mileage;
    }

    void displayInfo() {
        cout << "Бренд: " << brand << endl;
        cout << "Модель: " << model << endl;
        cout << "Год: " << year << endl;
        cout << "Цвет: " << color << endl;
        cout << "Пробег: " << mileage << " km" << endl;
    }

    void increaseMileage(int additionalMileage) {
        mileage += additionalMileage;
        cout << "Пробег увеличился на " << additionalMileage << " км." << endl;
    }
};

int main() {
    string brand, model, color;
    int year, mileage, choice, additionalMileage;

    cout << "Введите бренд: ";
    getline(cin, brand);
    cout << "Введите модель: ";
    getline(cin, model);
    cout << "Введите год: ";
    cin >> year;
    cin.ignore();
    cout << "Введите цвет: ";
    getline(cin, color);
    cout << "Введите пробег: ";
    cin >> mileage;

    Car car(brand, model, year, color, mileage);

    do {
        cout << "\n Меню:\n1. Отображение информации об автомобиле\n2. Увеличить пробег\n3. Выход из программы. ";
        cin >> choice;

        switch (choice) {
            case 1:
                car.displayInfo();
                break;
            case 2:
                cout << "Введите дополнительный пробег: ";
                cin >> additionalMileage;
                car.increaseMileage(additionalMileage);
                break;
            case 3:
                cout << "Выход.";
                break;
            default:
                cout << "Неверный выбор. Пожалуйста, введите другой вариант.";
        }
    } while (choice != 3);

    return 0;
}
