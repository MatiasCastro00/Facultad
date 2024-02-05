#include <iostream>
using namespace std;

int main()
{
    int _valorReferencia;
    int _n;

    cin >> _valorReferencia;
    cin >> _n;
    for (size_t i = 0; i < _n; i++)
    {
        cout << _valorReferencia + i <<" ";
    }
    
}