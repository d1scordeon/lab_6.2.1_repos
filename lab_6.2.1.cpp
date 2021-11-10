#include <iostream> 
#include <iomanip> 
#include <time.h> 
#include <Windows.h> 

using namespace std;

//Ітераційний спосіб 

void input(int* a, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}

void print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
		cout << endl;
	
}

int Max(int* a, const int size) 
{
	int max = a[0];
	for (int i = 1; i < size; i++)
			if (a[i] > max)
			max = a[i];
	return max;
}

int Min(int* a, const int size)
{
	int min = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] < min)
			min = a[i];
	return min;
}

void inverse(int* a, const int n)
{
	int tmp;
	for (int i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	cout << " " << "n = ";
	cin >> n;

	int* a = new int[n];


	input(a, n);
	print(a, n);

	cout << "Максимальне = " << Max(a, n) << endl;
	cout << "Мінімальне = " << Min(a, n) << endl;

	inverse(a, n);
	print(a, n);

	return 0;
}