#include "array_utils.hpp"
#include <iostream>

namespace arr
{
	void read(int* const arr, int size)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = std::rand();
			std::cout << arr[i] << "\t";
		}
	}

	void zamena(int* const arr, int size)
	{
		int copy = 0;

		for(int i = 0, j = (size - 1); i < (size / 2); i++, j--)
		{
			copy = arr[i];
			arr[i] = arr[j];
			arr[j] = copy;
		}
	}

	void show(const int* const arr, int size)
	{
		std::cout << std::endl;
		for(int i = (size - 1); i >= 0; i--)
		{
			std::cout << arr[i] << "\t";
		}
	}

	int* add(int* arr_copy, int* size, int vall)
	{
		(*size)++;

		int* arr = new int[*size];

		for (int i = 0; i <= (*size - 2); i++)
		{
			arr[i] = arr_copy[i];
		}

		arr[(*size - 1)] = vall;

		delete[] arr_copy;

		return arr;
	}
}