#include <iostream>

using std::string;
using std::cout;
using std::cin;


// создаем новый тип данных через enum - енам - перчесление
enum LaptopCondition {
    New,
    Good,
    Bad
};

// создаем новый тип данных через структуру
struct Laptop {
    int price;
    string model;
    LaptopCondition condition;
    string sellerName;

    Laptop() {}

    // конструктор - специальная функция которая создает новый тип данных
    Laptop(int price, string model, LaptopCondition condition, string sellerName) {
        this->price = price;
        this->model = model;
        this->condition = condition;
        this->sellerName = sellerName;
    }

    void toString() {
        cout << this->price << ' '<< this->model<< ' ' << this->condition << ' ' << this->sellerName << '\n';
    }
};

enum FilterKey {
    Price,          // 0
    Model,          // 1
    Condition,      // 2
    SellerName,     // 3
};

void filter(Laptop n[], FilterKey key);

int main() {
    setlocale(LC_ALL, "Russian");
    Laptop l;
    l.model = "Xiaomi";
    l.sellerName = "Rozetka";
    l.condition = LaptopCondition::New;
    l.price = 26000;


    Laptop l1(26000, "Xiaomi", LaptopCondition::New, "Rozetka");

    int a1 = 5;
    int a[] = {a1, 8, 10};

    Laptop n[] = {
            l,
            l1,
            Laptop(16000, "Xiaomi", LaptopCondition::Bad, "Rozetka"),
            Laptop(30000, "Xiaomi", LaptopCondition::Good, "Rozetka"),
            Laptop(25000, "Xiaomi", LaptopCondition::New, "Rozetka"),
            Laptop(16000, "Xiaomi", LaptopCondition::Bad, "Rozetka"),
    };

    // Ввод из коносли ключа
    cout << "Введите ключ фильтрации \n";
    cout << "0 - price \n";
    cout << "1 - MODEL \n";
    cout << "2 - condition \n";
    cout << "3 - SellerName \n";

    int filterKey;
    cin >> filterKey;

    switch (filterKey) {
        case 0:
            filter(n,FilterKey::Price);
            break;
        case 1:
            filter(n,FilterKey::Model);
            break;
        case 2:
            filter(n,FilterKey::Condition);
            break;
         case 3:
             filter(n,FilterKey::SellerName);
             break;
    }
    // фильтр

    // покажем результат


    cout << FilterKey::Price;
    cout << FilterKey::Condition;

    return 0;
}


// TODO: диаграмму
void filter(Laptop n[], FilterKey key) {
//    for(int i=0; i<6; i++){
//        // TODO: с помошью switch оператора перебрать значения из enum FilterKey
//        switch(key) {
//            case FilterKey::Condition:
//                if(n[i].condition == userInput) {
//                    n[i].toString();
//    //             cout << n[i].price << ' '<< n[i].model<< ' ' << n[i].condition << ' ' << n[i].sellerName << '\n';
//                }
//                // TODO: дописать case для каждого случая FilterKey
//        }
//        if(n[i].condition == LaptopCondition::Bad) {
//            n[i].toString();
////             cout << n[i].price << ' '<< n[i].model<< ' ' << n[i].condition << ' ' << n[i].sellerName << '\n';
//        }
//    }
}