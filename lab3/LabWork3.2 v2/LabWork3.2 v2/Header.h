#pragma once
#include <string>
using namespace std;

class Time {
private:
    int day;
    int month;
    int year;

public:
    // Конструктор по умолчанию
    Time() : day(0), month(0), year(0) {}

    // Конструктор с параметрами
    Time(int h, int m, int s) : day(h), month(m), year(s) {}

    // Методы для установки и получения дня
    void setday(int h) {
        day = h;
    }
    int getday() const {
        return day;
    }

    // Методы для установки и получения месяца
    void setmonth(int m) {
        month = m;
    }
    int getmonth() const {
        return month;
    }

    // Методы для установки и получения года
    void setyear(int s) {
        year = s;
    }
    int getyear() const {
        return year;
    }


    //Метод для определения высокосный ли год
    std:: string leap_year() {
        if (year % 4 == 0) {
            return "Год высокосный";
        }
        else {
            return "Год неввысокосный";
        }
    }
    // Метод для добавления дней в дату
    void increase() {
        day += 5;
    }

};


void timeFunction(Time i) {
    i.increase();
    if (i.getday() > 31) {// Проверяем правильность даты
        i.setday(i.getday() - 31);
        i.setmonth(i.getmonth() + 1);
    }
    if (i.getmonth() > 12) {
        i.setmonth(i.getmonth() - 12);
        i.setyear(i.getyear() + 1);
    }
    cout << i.leap_year() << endl;// Выводим результат
    cout << "День:" << to_string(i.getday()) << " " << "Месяц:" << to_string(i.getmonth()) << " " << "Год:" << to_string(i.getyear()) << endl;

}