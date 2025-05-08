#include <iostream>

class Date {
    int year;
    int month;
    int day;

    public:
        void SetDate(int _year, int _month, int _date);
        void AddDay(int inc);
        void AddMonth(int inc);
        void AddYear(int inc);
        void ShowDate();
        int GetCurrentMonthTotalDays(int _year, int _day);

        Date() {
            std::cout << "Call out default constructor!" << std::endl;
            year = 2001;
            month = 3;
            day = 13;
        }

        Date(int _year, int _month, int _day) {
            std::cout << "Call out 2nd default constructor!" << std::endl;
            year = _year;
            month = _month;
            day = _day;
        }
};

void Date::SetDate(int _year, int _month, int _day) {
    year = _year;
    month = _month;
    day = _day;
}

int Date::GetCurrentMonthTotalDays(int _year, int _month) {
    static int monthDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (_month != 2) {
        return monthDay[_month - 1];
    } else if ((_year % 4 == 0 && _year % 100 != 0) || (_year % 400 == 0)) {
        return 29;
    } else {
        return 28;
    }
}


void Date::ShowDate() {
    std::cout << year << "/" << month << "/" << day <<std::endl;
}

void Date::AddDay(int inc) {
    while(true) {
        int CurrentMonthTotalDays = GetCurrentMonthTotalDays(year, month);

        if(day + inc <= CurrentMonthTotalDays) {
            day += inc;
            return;
        }
        else {
            inc -= (CurrentMonthTotalDays - day + 1);
            day = 1;
            AddMonth(1);
        }
    }
}

void Date::AddMonth(int inc) {
    AddYear((inc + month - 1) / 12);
    month = month + inc % 12;
    month = (month == 12 ? 12 : month % 12);
}

void Date::AddYear(int inc) { year += inc;}

int main() {
    Date day = Date();
    Date day2;
    Date day3(2002, 01, 03);
    day.ShowDate();
    day2.ShowDate();
    day3.ShowDate();

    // day.AddDay(30);
    // day.ShowDate();

    // day.AddDay(2000);
    // day.ShowDate();

    // day.SetDate(2012, 1, 31);
    // day.AddDay(29);
    // day.ShowDate();

    // day.SetDate(2012, 8, 4);
    // day.AddDay(2500);
    // day.ShowDate();

    getchar();

    return 0;
}