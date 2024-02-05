#include <iostream>
using namespace std;

void PrintArray(int* array, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
void OrederNumbers(int numbers[5])
{
    int aux;
    for (size_t i = 0; i < 5; i++)
    {
        // Comparaciones
        for (size_t j = 0; j < 5 - i; j++)
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
    PrintArray(numbers, 5);
}

int main()
{
    int _n = 5;
    int _numbers[5];

    for (size_t i = 0; i < _n; i++)
    {
        cin >> _numbers[i];
    }
    OrederNumbers(_numbers);
}