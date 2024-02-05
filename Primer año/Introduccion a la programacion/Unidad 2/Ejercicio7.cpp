#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

int ShowCurrentAge(int year, int month, int day)
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int currentYear = 1900 + ltm->tm_year;
    int currentMonth = 1 + ltm->tm_mon;
    int currentDay = ltm->tm_mday;

    int difference = currentYear - year;

    // Verificar si todavía no ha cumplido años este año
    if (currentMonth < month || (currentMonth == month && currentDay < day))
    {
        difference--;
    }

    return difference;
}
void ShowBirthdateMV(int year, int month, int day)
{
    system("cls");
    cout << "============================================" << endl;
    cout << "usted nacio el dia: " << day << " de " << month << " de " << year << " y tiene " << ShowCurrentAge(year, month, day) << " de edad" << endl;
    cout << "============================================" << endl;
    system("PAUSE");
}

int main(int argc, char *argv[])
{
    int _year;
    int _month;
    
    
    int _day;
    cout << "Ingrese año de nacimiento: ";
    cin >> _year;
    cout << "" << endl;
    cout << "Ingrese mes de nacimiento: ";
    cin >> _month;
    cout << "" << endl;
    cout << "Ingrese dia de nacimiento: ";
    cin >> _day;
    ShowBirthdateMV(_year, _month, _day);
    ShowCurrentAge(_year, _month, _day);
    return 0;
}