
#include <iostream>

using namespace std;

void ShowUserData(int age, string name, string subName)
{
    system("cls");
    cout << "============================================" << endl;
    cout << "Nombre: " << name << endl;
    cout << "Apellido: " << subName << endl;
    cout << "Edad: " << age << endl;
    cout << "============================================" << endl;
    system("PAUSE");
}
void compareUserAge(int age, int toCompareAge)
{
    system("cls");
    cout << "============================================" << endl;
    cout << "Edad: " << age << endl;
    cout << "Es mayor a:" << toCompareAge << "?: " << (age > toCompareAge) << endl;
    cout << "============================================" << endl;
    system("PAUSE");
}
void Count(int i, string x, int numberToShow)
{
    system("cls");
    cout << "============================================" << endl;
    x = x + " " + to_string(i);
    cout << "" << x << endl;
    cout << "============================================" << endl;
    i++;
    //Sleep(500);
    if (i < numberToShow)
        Count(i, x, numberToShow);
    else
    {
        system("PAUSE");
        return;
    }
}
/*
int main(int argc, char *argv[])
{
    int _age;
    string _name;
    string _subName;
    cout << "Ingrese su nombre: ";
    cin >> _name;
    cout << "" << endl;
    cout << "Ingrese su apellido: ";
    cin >> _subName;
    cout << "" << endl;
    cout << "Ingrese su edad: ";
    cin >> _age;
    ShowUserData(_age, _name, _subName);
    compareUserAge(_age, 50);
    Count(1,"",10);
    return 0;
}*/
int main(int argc, char *argv[])
{
    cout << "Bienvenidos a Introduccion a la Programacion";
    return 0;
}