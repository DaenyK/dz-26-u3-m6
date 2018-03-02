#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include "Header.h"

using namespace std; 

int geometricProgression(int f, int q, int n)
{
	int a = f*q;;
	if (n <= 2)
	{
		return a;
	}
	n--;
	a = geometricProgression(f, q, n);
	a *= q;
	return a;
}

int SumOfGeometricProgression(int f, int q, int n, int sum)
{
	sum += f;
	if (n <= 1)
		return sum;

	n--;
	f *= q;

	sum = SumOfGeometricProgression(f, q, n, sum);

	return sum;
}



int i, j;

//enum type_number { positive, negative, all };
#define colCount 5

int happy(char* arr)
{
	int f, s;
	f = (int)arr[0] + (int)arr[1];
	s = (int)arr[2] + (int)arr[3];
	if (f == s)
		return 1;
	else
		return 0;
}

void sort_u(int*arr, int j)
{
	int prom;

	if (arr[j] > arr[j + 1])
	{
		prom = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = prom;
	}

}
void sort_d(int*arr, int j)
{
	int prom;

	if (arr[j] < arr[j + 1])
	{
		prom = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = prom;
	}

}
void sort(int*arr, int r, int n)
{
	int prom;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < r - 1; j++)
		{
			if (n == 1)
				sort_u(arr, j);
			else
				sort_d(arr, j);
		}
	}
}

int  numb(type_number tn, int start, int end)
{
	switch (tn)
	{
	case positive:
		return start + rand() % end;
		break;
	case negative:
		return start*(-1) + rand() % end;
		break;
	case all:
		return rand();
		break;

	}


}

double  numb(type_number tn, double start, int end)
{
	switch (tn)
	{
	case positive:
		return (start + rand() % end) / (start + rand() % end);
		break;
	case negative:
		return start*(-1) + rand() % end;
		break;
	case all:
		return rand();
		break;

	}


}
void create(int *arr, int r, int start, int end, type_number tn)
{

	for (i = 0; i < r; i++)
	{
		arr[i] = numb(tn, start, end);
	}
}

void createMatrix(int(*arr)[colCount], int r, int start, int end, type_number tn)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < colCount; j++)
		{
			arr[i][j] = numb(tn, start, end);
		}
	}
}
void createMatrix(double(*arr)[colCount], int r, double start, int end, type_number tn)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < colCount; j++)
		{
			arr[i][j] = numb(tn, start, end);
		}
	}
}

void print_arr(int *arr, int r)
{
	for (i = 0; i < r; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void print_matrix(int(*arr)[colCount], int r)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < colCount; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void print_matrix(double(*arr)[colCount], int r)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < colCount; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}




void arr_d(int *arr, int arrl[][4], int r)
{
	int count = 0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			arrl[i][j] = arr[count];
			//*(*(arrl+i)+j)=*(arr+m);
			count++;
		}

	}
}




void smooth(int *a, int r, const int *k)
{
	for (int i = 0; i < *k; i++)
	{
		a++;
		for (int j = 1; j < r - 1; j++)
		{
			//a[j] = (a[j - 1] + a[j] + a[j + 1]) / 3;
			*a = (*(a - 1) + *(a)+*(a + 1)) / 3;
			a++;
		}
		a = a - 9;
		print_arr(a, r);
	}
}



int sum_ind(int(*a)[4], int r, int &col, int &row, int &max)
{
	int mx;
	max = 0;
	//int max = *(*a);

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				col = j;
				row = i;
				mx = i + j;
			}
		}
	}
	return mx;
}


void sr_arif(double(*a)[colCount], int r)
{
	int sum = 0, count = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < colCount; j++)
		{
			sum += a[i][j];
			count++;
			//s += *(*a);
			//a++;
		}
	}
	double rt = sum / count;
	cout << rt << endl;

}


void twoInOne(int(*a)[colCount], int r, int *mas)
{
	cout << endl;
	for (int j = 0; j < colCount; j++)
	{
		for (int i = 0; i < r; i++)
		{
			mas[j] += a[i][j];
		}
		cout << mas[j] << "\t";
	}
}



void MasReturn(int*a, int r, int *sum, int * pr)
{
	for (i = 0; i < r; i++)
	{
		*sum += a[i];
		*pr *= a[i];
	}
	cout << *sum << " ñóììà âñåõ ýëåìåíòîâ ìàññèâà\n";
	cout << *pr << " ïðîèçâåäåíèå âñåõ ýëåìåíòîâ ìàññèâà\n";
}

void MasReturn(short(*a)[colCount], short r, short*sum, int* pr)
{
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < colCount; j++)
		{
			*sum += a[i][j];
			*pr *= a[i][j];
		}
	}
	cout << *sum << " ñóììà âñåõ ýëåìåíòîâ ìàññèâà\n";
	cout << *pr << " ïðîèçâåäåíèå âñåõ ýëåìåíòîâ ìàññèâà\n";
}

void MasReturn(int(*a)[colCount], int r, int *sum, int * pr)
{
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < colCount; j++)
		{
			*sum += a[i][j];
			*pr *= a[i][j];
		}
	}
	cout << *sum << " ñóììà âñåõ ýëåìåíòîâ ìàññèâà\n";
	cout << *pr << " ïðîèçâåäåíèå âñåõ ýëåìåíòîâ ìàññèâà\n";
}

void MasReturn(double(*a)[colCount], double r, double *sum, double* pr)
{
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < colCount; j++)
		{
			*sum += a[i][j];
			*pr *= a[i][j];
		}
	}
	cout << *sum << " ñóììà âñåõ ýëåìåíòîâ ìàññèâà\n";
	cout << *pr << " ïðîèçâåäåíèå âñåõ ýëåìåíòîâ ìàññèâà\n";
}

int MaxMas(int* mas, int r, int max, int start)
{
	if (*mas > max) 
		max = *mas;
	if (start > r)
	{
		return max;
	}
	start++;
	mas++;
	max = MaxMas(mas, r, max, start);
	return max;
}


int IndexOfMaxArr(int* arr, int r, int max, int start, int index)
{
	if (*arr > max)
	{
		max = *arr;
		index = start;
	}
	if (start > r)
	{
		return index;
	}
	start++;
	arr++;
	index = IndexOfMaxArr(arr, r, max, start, index);
	return index;
}


int SumOfPositive(int *arr, int r, bool positive)
{
	int sum = 0;
	if (positive == true)
	{
		for (int i = 0; i < r; i++)
		{
			if (arr[i] > 0) sum += arr[i];
		}
		return sum;
	}
	else
	{
		for (int i = 0; i < r; i++)
		{
			if (arr[i] < 0) sum += arr[i];
		}
		return sum;
	}
}


int Euclid (int a, int b)
{
	int ost = 1;
	if (a > b)
	{
		while (ost > 0)
		{
			ost = a%b;
			if (ost != 0)
			{
				a = b;
				b = ost;
			}
			else break;
		}
		return b;
	}
	else
	{
		while (ost > 0)
		{
			ost = b%a;
			if (ost != 0)
			{
				b = a;
				a = ost;
			}
			else break;
		}
		return a;
	}
}