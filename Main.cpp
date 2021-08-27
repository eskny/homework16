#include <iostream>
#include "CurrentTime.h"

const int N = 6;
int Str = CurrentTime() % N;//строкa массива, индекс которой равен остатку деления текущего числа календаря на N
int array[N][N];

int main()
{
	std::cout << "Array:\n";

	int sum = 0;

	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N; i++)
		{
			 array[i][j]=i+j;

			 std::cout << array[i][j];
			
		}

		std::cout << "\n";
		
		sum += array[Str][j];
		
	}
	std::cout << "\n" << "Sum of elements:" << sum << "\n";
}
