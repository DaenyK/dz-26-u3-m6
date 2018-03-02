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
		cout << "������� ����� �������: ";
		cin >> nz;
		switch (nz)
		{
		case 1:
		{
			//1.	���� ������ ���� � ����������� �������������� ����������. 
			//�������� ����������� �������: 
			//a.���������� n - �� ����� ����������
			//b.���������� ����� n ������ ������ ����������
			int f = 2, q = 4, n = 5;
			cout << "������ ���� ����. ��.: " << f << ", �����������: " << q << endl;
			int result, sum = 0;
			result = geometricProgression(f, q, n);
			cout << n << "-�� ���� ��������� - " << result << endl;
			result = SumOfGeometricProgression(f, q, n, sum);
			cout << "����� ������ " << n << " ������ ���������: " << result << endl;
		}break;

		case 2:
		{
			//2.	�������� ����������� ������� ��� ���������� ������������� 
			//�������� ������� �� n ���������

			int mas[10];
			create(mas, 10, 1, 10, positive);
			print_arr(mas, 10);
			int max = MaxMas(mas, 10);
			cout << "���� �������: " << max << endl;
		}break;

		case 3:
		{
			//3.	�������� ����������� ������� ��� ���������� ������� ������������� 
			//�������� ������� �� n ���������

			int mas[10];
			create(mas, 10, 1, 10, positive);
			print_arr(mas, 10);
			int MX = IndexOfMaxArr(mas, 10);
			cout << "������ ���� ��������: " << MX << endl;
		}break;

		case 4:
		{
			//4.	��� ������ ����� ����� A. ����� ����� ������������� � ������������� 
			//��������� �������, ��������� ������� ����������� �����
			int mas[10], sum;
			for (int i = 0; i < 10; i++)
			{
				mas[i] = -20 + rand() % 50;
			}
			print_arr(mas, 10);
			sum= SumOfPositive(mas, 10, true);
			cout << "c���� ������������� ���������: " << sum<< endl;
			sum = SumOfPositive(mas, 10, false);
			cout << "����� ������������� ���������: " << sum << endl;
		}break;

		case 5:
		{
			//5.	���� ��� ����������� �����.����� ���������� ����� ������� 
			//���� �����, ��������� ������� ����������� �������� �������.
			int a = rand() % 1000;
			int b  = rand() % 1000;
			int result = Euclid(a, b);
			cout << "���������� ����� ������� ����� " << a << " � " << b << " : " << result << endl;
		}break;

		}


		cout << "������ ���������� 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "������" << endl;
		}
	} while (nz > 0);


}