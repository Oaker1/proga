
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void CocktailSort(int a[], int n)
{
	bool swapped = true;
	int start = 0;
	int end = n - 1;

	while (swapped)
	{
		swapped = false;

		for (int i = start; i < end; ++i)
		{
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				swapped = true;
			}
		}
		if (!swapped)
			break;
		swapped = false;
		--end;

		for (int i = end - 1; i >= start; --i)
		{
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				swapped = true;
			}
		}

		++start;
	}
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int trebovanie(int min, int max){
	int size, rn;
	cout << "Insert min "; cin >> min;
	cout << "Insert max "; cin >> max;
	size = max - min;
	int a[size];
	for (int i = 1; i+min < max; i++)
	a[i]= min + i;
	rn = rand() % (size) + (0);
	cout << "Random number: " << a[rn];
	return rn;
}


int main()
{
	int size;
	cin >> size;
	int a[size];
	for (int i = 0; i<size; i++ )
	a[i] = rand() % 9 +1;
	for (int i = 0; i<size; i++ )
	cout << a[i] << " ";
	int n = sizeof(a) / sizeof(a[0]);
	CocktailSort(a, n);
	printf("\nSorted array :\n");
	printArray(a, n);
	return 0;
}



