#include <iostream>
#include <algorithm>
#include <time.h>
#include <conio.h>
using namespace std;
#define N 5

void PrintArray(int* array)
{
	for (size_t i = 0; i < N; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void OrderNumbers(int* numbers)
{
	int aux;
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N - i - 1; j++)
		{
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

void ThrowDice(int* numbers)
{
	for (size_t i = 0; i < N; i++)
	{
		numbers[i] = (rand() % 6) + 1;
	}
	OrderNumbers(numbers);
}

int checkEscalera(int* numbers)
{
	if ((numbers[0] == 1 && numbers[1] == 2 && numbers[2] == 3 && numbers[3] == 4 && numbers[4] == 5) ||
		(numbers[0] == 2 && numbers[1] == 3 && numbers[2] == 4 && numbers[3] == 5 && numbers[4] == 6))
	{
		cout << "Escalera: 50" << endl;
		return 50;
	}
	cout << "Escalera: 0" << endl;
	return 0;
}

int checkFull(int* numbers)
{
	if ((numbers[0] == numbers[1] && numbers[1] == numbers[2] && numbers[3] == numbers[4] && numbers[2] != numbers[3]) ||
		(numbers[0] == numbers[1] && numbers[2] == numbers[3] && numbers[3] == numbers[4] && numbers[1] != numbers[2]))
	{
		cout << "Full: 30" << endl;
		return 30;
	}
	cout << "Full: 0" << endl;
	return 0;
}

int checkPoker(int* numbers)
{
	if ((numbers[0] == numbers[1] && numbers[1] == numbers[2] && numbers[2] == numbers[3]) ||
		(numbers[1] == numbers[2] && numbers[2] == numbers[3] && numbers[3] == numbers[4]))
	{
		cout << "Poker: 40" << endl;
		return 40;
	}
	cout << "Poker: 0" << endl;
	return 0;
}

int checkGenerala(int* numbers)
{
	if (numbers[0] == numbers[1] && numbers[1] == numbers[2] && numbers[2] == numbers[3] && numbers[3] == numbers[4])
	{
		cout << "Generala: 60" << endl;
		return 60;
	}
	cout << "Generala: 0" << endl;
	return 0;
}

int checkNumbers(int* numbers, int check)
{
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		if (numbers[i] == check)
		{
			count += check;
		}
	}
	cout << "Todo al " << check << ": " << count << endl;
	return count;
}

int CheckScore(int* numbers)
{
	int highestScore = 0;
	for (int i = 1; i <= 6; i++)
	{
		highestScore = max(highestScore, checkNumbers(numbers, i));
	}
	highestScore = max(highestScore, checkEscalera(numbers));
	highestScore = max(highestScore, checkFull(numbers));
	highestScore = max(highestScore, checkPoker(numbers));
	highestScore = max(highestScore, checkGenerala(numbers));

	return highestScore;
}

int main()
{
	srand(time(0));
	char _checkButton;

	while (true)
	{
		fflush(stdin);
		cout << "Presione p para tirar" << endl;
		_checkButton = _getch();
		if (_checkButton == 'p' || _checkButton == 'P')
		{
			int _numbers[N];
			int _score = 0;
			int _pcNumbers[N];
			int _pcScore = 0;

			cout << "Tu Tirada: " << endl;
			ThrowDice(_numbers);
			_score = CheckScore(_numbers);
			cout << "Total:" << _score << endl << endl;

			cout << "Tirada de la pc: " << endl;
			ThrowDice(_pcNumbers);
			_pcScore = CheckScore(_pcNumbers);
			cout << "Total:" << _pcScore << endl << endl;

			if (_score > _pcScore)
				cout << "Tu Ganas" << endl << endl;
			else
				cout << "La pc Gana" << endl << endl;
		}
	}
	return 0;

}

