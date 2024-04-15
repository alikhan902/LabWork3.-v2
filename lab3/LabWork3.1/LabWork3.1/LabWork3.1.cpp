#include <iostream>
#include <vector>
#include <string>
#include "Header.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    int j;
    int number = 1;

    cout << "Введите количество купюр:";
    cin >> j;
    
    vector <Money> banknote_sum;// записываем данные о купюрах в вектор
    for (j; j > 0; j--) {
        int denomination, quantity;
        cout << "Купюра"<<" " << to_string(number) << ":" << endl;
        number++;
        cout << "Введите номинал купюры:";
        cin >> denomination;
        cout << "Введите количество купюр данного номинала:";
        cin >> quantity;
        Money banknote(denomination, quantity);
        banknote_sum.push_back(banknote);
    }
    // Записываем данные о банкнотах
    
    int k = 0;
    for (Money i : banknote_sum) {// вычисляем сумму всех купюр
        k += i.Summ();
    }
    cout << k;
}
