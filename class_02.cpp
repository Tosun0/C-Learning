#include <iostream>

class Date {
    int year;
    int month;
    int day;

    public:
    void SetDate(int _year, int _month, int _day) {
        year = _year;
        month = _month;
        day = _day;
    }

    void AddDay(int inc) {
        int maxDay;
        for(int i = 0; i < inc; i++) {
            switch (month)
            {
            case 2:
                maxDay = 28;   
                break;
            case 4:
                maxDay = 30;   
                break;
            case 6:
                maxDay = 30;   
                break;
            case 9:
                maxDay = 30;   
                break;
            case 11:
                maxDay = 30;   
                break;
            
            default:
                maxDay = 31;
                break;
            }

            day++;
            if(day > maxDay) {
                day = 1;
                month++;
                if(month == 13) month = 1;
            }
        }

        if(day > maxDay) day = maxDay;
    }

    void AddMonth(int inc) {
        for(int i = 0; i < inc; i++) {
            month++;
            if(month > 12) {
                month = 1;
                year++;
            }
        }

        int maxDay;
        switch (month)
        {
        case 2:
            maxDay = 28;   
            break;
        case 4:
            maxDay = 30;   
            break;
        case 6:
            maxDay = 30;   
            break;
        case 9:
            maxDay = 30;   
            break;
        case 11:
            maxDay = 30;   
            break;
        
        default:
            maxDay = 31;
            break;
        }

        if(day > maxDay) day = maxDay;
    }

    void AddYear(int inc) {
        AddMonth(inc * 12);
    }

    void ShowDate() {
        std::cout << year << "/" << month << "/" << day << std::endl;
    }
};

int main() {
    Date date;
    date.SetDate(2025, 3, 13);
    date.ShowDate();
    date.AddDay(18);
    date.ShowDate();
    date.AddMonth(1);
    date.ShowDate();
    date.AddYear(1);
    date.ShowDate();

    getchar(); getchar();

    return 0;
}