#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include "Header.h"

using namespace std;

unsigned short int q;

void main()

{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	unsigned short int nz;

	do
	{
		cout << "Введите номер задания: ";
		cin >> nz;
		switch (nz)
		{
		case 1:
		{
			//1.	Даны первый член и знаменатель геометрической прогрессии. 
			//Написать рекурсивную функцию: 
			//a.нахождения n - го члена прогрессии
			//b.нахождения суммы n первых членов прогрессии
			int f = 2, q = 4, n = 5;
			cout << "первый член геом. пр.: " << f << ", знаменатель: " << q << endl;
			int result, sum = 0;
			result = geometricProgression(f, q, n);
			cout << n << "-ый член прогресии - " << result << endl;
			result = SumOfGeometricProgression(f, q, n, sum);
			cout << "сумма первых " << n << " членов прогресии: " << result << endl;
		}break;

		case 2:
		{
			//2.	Написать рекурсивную функцию для вычисления максимального 
			//элемента массива из n элементов

			int mas[10];
			create(mas, 10, 1, 10, positive);
			print_arr(mas, 10);
			int max = MaxMas(mas, 10);
			cout << "макс элемент: " << max << endl;
		}break;

		case 3:
		{
			//3.	Написать рекурсивную функцию для вычисления индекса максимального 
			//элемента массива из n элементов

			int mas[10];
			create(mas, 10, 1, 10, positive);
			print_arr(mas, 10);
			int MX = IndexOfMaxArr(mas, 10);
			cout << "индекс макс элемента: " << MX << endl;
		}break;

		case 4:
		{
			//4.	Дан массив целых чисел A. Найти суммы положительных и отрицательных 
			//элементов массива, используя функцию определения суммы
			int mas[10], sum;
			for (int i = 0; i < 10; i++)
			{
				mas[i] = -20 + rand() % 50;
			}
			print_arr(mas, 10);
			sum= SumOfPositive(mas, 10, true);
			cout << "cумма положительных элементов: " << sum<< endl;
			sum = SumOfPositive(mas, 10, false);
			cout << "Сумма отрицательных элементов: " << sum << endl;
		}break;

		case 5:
		{
			//5.	Даны два натуральных числа.Найти наименьшее общее кратное 
			//этих чисел, используя функцию реализующую алгоритм Евклида.
			int a = rand() % 1000;
			int b  = rand() % 1000;
			int result = Euclid(a, b);
			cout << "наименьшее общее кратное чисел " << a << " и " << b << " : " << result << endl;
		}break;

		}


		cout << "Хотите продолжить 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "ошибка" << endl;
		}
	} while (nz > 0);


}