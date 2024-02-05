
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int _coinsAmmount;
    bool _canContinue = false;
    int _coinsPerPull = 3;
    int _coinsFaces = 3;
    int _wonPulls = 0;
    while (_canContinue != true)
    {

        cout << "Ingrese Monedas <1 - 10>" << endl;
        cin >> _coinsAmmount;
        switch (_coinsAmmount)
        {
        case 1 ... 10:
            _canContinue = true;
            break;

        default:
            cout << "Numero Equivocado, recuerde ingresar un numero entre 1 y 10" << endl;
            system("PAUSE");
            break;
        }
    }
    cout << "=======================================" << endl;
    cout << "Tenes " << _coinsAmmount << " monedas" << endl;
    cout << "=======================================" << endl
         << endl;
    for (size_t i = 0; i < _coinsAmmount; i++)
    {
        _canContinue = false;
        while (_canContinue != true)
        {
            fflush(stdin);
            cout << "Precione P para tirar" << endl;
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

        cout << "=======================================" << endl;
        int _numbers[_coinsPerPull];
        bool _areEquals = true;
        cout << "tirada " << i + 1 << endl
             << endl;
        cout << "Valores: ";
        for (size_t x = 0; x < _coinsPerPull; x++)
        {
            _numbers[x] = rand() % _coinsFaces;
            cout << _numbers[x] << " ";
            if (x > 0)
                if (_numbers[x] != _numbers[x - 1])
                    _areEquals = false;
        }
        if (_areEquals)
        {
            _wonPulls++;
            cout << endl
                 << "son iguales";
        }
        cout << endl;
        cout << "=======================================" << endl;
    }
    cout << "=======================================" << endl;
    cout << "Ganaste " << _wonPulls << "veces" << endl;
    cout << "=======================================" << endl;
    system("PAUSE");
}