#include <iostream>
#include <algorithm>
#include <time.h>
#include <conio.h>
using namespace std;
int N = 5;

void PrintArray(int *array)
{
    for (size_t i = 0; i < N; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
void OrderNumbers(int *numbers)
{
    int aux;
    for (size_t i = 0; i < N; i++)
    {
        // Comparaciones
        for (size_t j = 0; j < N - i - 1; j++)
        {
            // Intercambiar los elementos
            if (numbers[j] > numbers[j + 1])
            {
                aux = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = aux;
            }
        }
    }
    PrintArray(numbers);
}
void ThrowDice(int *numbers)
{
    for (size_t i = 0; i < N; i++)
    {
        numbers[i] = (rand() % 6) + 1;
    }
    OrderNumbers(numbers);
}
int CheckPairs(int *numbers)
{
    
    int _equalsNumbers = 0;
    int _score = 0;
    bool _pair = false;
    bool _triple = false;
    for (size_t i = 0; i < N; i++)
    {
        bool _dontAdd = false;
        cout << "Todo al " << i+1 <<" : ";
        if (numbers[i] == numbers[i + 1])
        {
            if (_equalsNumbers == 0)
                _equalsNumbers = 1;
            _equalsNumbers++;
        }
        else
        {
            switch (_equalsNumbers)
            {
            case 5:
                _score += 60;
                _dontAdd = true;
                break;
            case 4:
                _score += 40;
                _dontAdd = true;
                break;
            case 3:
                _triple = true;
                if (_pair == true)
                {
                    _dontAdd = true;
                    _score += 30;
                }
                break;
            case 2:
                _pair = true;
                if (_triple == true)
                {
                    _dontAdd = true;
                    _score += 30;
                }
                break;
            default:
                break;
            }
            if (_dontAdd == false)
            {
                _score += numbers[i] * _equalsNumbers;
            }
                _equalsNumbers = 0;
            if(numbers[i]==i+1)
            {
                cout << _score <<endl;
            }
            else
            {
                cout << "0 " <<endl;
            }
        }
    }
    return _score;
}
int checkEscalera(int *numbers)
{
    int count = 0;
    for (size_t i = 0; i < N; i++)
    {
        if (numbers[i] < numbers[i + 1])
            count++;
    }
    if (count == 5)
        return 50;
    else
        return 0;
}
int CheckScore(int *numbers)
{
    int _totalScore = 0;
    _totalScore += CheckPairs(numbers);
    _totalScore += checkEscalera(numbers);
    return _totalScore;
}
int main()
{
    srand(time(0));
    bool _endGame = false;
    while (_endGame != true)
    {

        bool _canContinue = false;
        while (_canContinue != true)
        {
            fflush(stdin);
            cout << "Precione p para tirar" << endl;
            // cin.get(_checkButton);
            char _checkButton = _getch();
            switch (_checkButton)
            {
            case 'p':
                _canContinue = true;
                break;
            case 'P':
                _canContinue = true;
                break;
            default:

                cout << "\r Se Ingreso un caracter Diferente a P" << endl;
                system("PAUSE");
                break;
            }
        }
        system("cls");
        int _numbers[N];
        int _score = 0;
        int _pcNumbers[N];
        int _pcScore = 0;
        cout << "Tu Tirada: " << endl;
        ThrowDice(_numbers);
        _score = CheckScore(_numbers);
        cout << "Total:" << _score << endl
             << endl;
        cout << "Tirada de la pc: " << endl;
        ThrowDice(_pcNumbers);
        _pcScore = CheckScore(_pcNumbers);
        cout << "Total:" << _pcScore << endl
             << endl;
        if (_score > _pcScore)
            cout << "Tu Ganas" << endl
                 << endl;
        else
            cout << "La pc Gana" << endl
                 << endl;
    }
}
