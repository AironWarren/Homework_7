namespace arr
{
	void read(int* const arr, int size);
	void zamena(int* const arr, int size);
	void show(const int* const arr, int size);
	int* add(int* arr, int* size, int vall);
	int* remBegin(int* arr_copy, int& size);
	int* remEnd(int* arr_copy, int& size);
	int* rem(int* arr_copy, int& size, int position);
	int* intersection(const int* const arr_1, int& size_1, const int* const arr_2, int& size_2, int& size);
	int* notDating(const int* const arr_1, int& size_1, const int* const arr_2, int& size_2, int& size);
}
