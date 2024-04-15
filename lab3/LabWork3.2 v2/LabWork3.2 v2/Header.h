#pragma once
#include <string>
using namespace std;

class Time {
private:
    int day;
    int month;
    int year;

public:
    // ����������� �� ���������
    Time() : day(0), month(0), year(0) {}

    // ����������� � �����������
    Time(int h, int m, int s) : day(h), month(m), year(s) {}

    // ������ ��� ��������� � ��������� ���
    void setday(int h) {
        day = h;
    }
    int getday() const {
        return day;
    }

    // ������ ��� ��������� � ��������� ������
    void setmonth(int m) {
        month = m;
    }
    int getmonth() const {
        return month;
    }

    // ������ ��� ��������� � ��������� ����
    void setyear(int s) {
        year = s;
    }
    int getyear() const {
        return year;
    }


    //����� ��� ����������� ���������� �� ���
    std:: string leap_year() {
        if (year % 4 == 0) {
            return "��� ����������";
        }
        else {
            return "��� �������������";
        }
    }
    // ����� ��� ���������� ���� � ����
    void increase() {
        day += 5;
    }

};


void timeFunction(Time i) {
    i.increase();
    if (i.getday() > 31) {// ��������� ������������ ����
        i.setday(i.getday() - 31);
        i.setmonth(i.getmonth() + 1);
    }
    if (i.getmonth() > 12) {
        i.setmonth(i.getmonth() - 12);
        i.setyear(i.getyear() + 1);
    }
    cout << i.leap_year() << endl;// ������� ���������
    cout << "����:" << to_string(i.getday()) << " " << "�����:" << to_string(i.getmonth()) << " " << "���:" << to_string(i.getyear()) << endl;

}