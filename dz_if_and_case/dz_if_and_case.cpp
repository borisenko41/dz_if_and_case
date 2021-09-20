// dz_if_and_case.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <clocale>

using namespace std;

void if_04(){
	cout << "//if_04" << endl;
	int a = 3;     //a b c любые числа
	int b = -1;
	int c = 14;

	unsigned int kolichestvo = 0;
	if (a>0)
	{
		kolichestvo++;
	}
	if (b>0)
	{
		kolichestvo++;
	}
	if (c>0)
	{
		kolichestvo++;
	}

	cout << "Количество чисел  " << kolichestvo << endl;
}
void if_08() {
	cout << "//if_08" << endl;
	int a = 13;     //a b любые числа
	int b = 7;      
	if (a>b)
	{
		cout << a << ":  " << b << endl;
	}
	else
	{
		cout << b << ":  " << a << endl;
	}

}

void if_12() {
	cout << "//if_12" << endl;
	int a = 11;       // a b c любые числа 
	int b = 3;        // min минимальное  
	int c = -1;
	int min = a;
	if (min>b)
	{
		min = b;
	}
	if (min=c)
	{
		min = c;
	}
	cout << "минимальное  " << c << endl;
}

void if_15() {
	cout << "//if_15" << endl;
	int a = 11;    // a b c любые числа  
	int b = 15;    // min минимальное число 
	int c = 21;    // cymma  сумма больших чисел
	int min = a;
	if (min > b)
	{
		min = b;
	}
	if (min > c)
	{
		min = c;
	}
	int cymma = a + b + c - min;
	cout << "Сумма  " << cymma << endl;
}

void if_19() {
	cout << "//if_19" << endl;
	int a = 5;   // a b c d любые 4 числа 
	int b = 5;
	int c = 7;
	int d = 5;
	if (a!=b & b==c)
	{
		cout << "1" << endl;
	}
	if (a!=b & a==c)
	{
		cout << "2" << endl;
	}
	if (c!=d & a==d)
	{
		cout << "3" << endl;
	}
	if (c!=d & a==c)
	{
		cout << "4" << endl;
	}
}
void case_01() {
	cout << "//case_01" << endl;
	int a;
	cin >> a;
	switch (a)
	{
	case 1 :
		cout << "Понедельник" << endl;
		break;
	case 2:
		cout << "Вторник" << endl;
		break;
	case 3:
		cout << "Среда" << endl;
		break;
	case 4:
		cout << "Четверг" << endl;
		break;
	case 5:
		cout << "Пятница" << endl;
		break;
	case 6:
		cout << "Суббота" << endl;
		break;
	case 7:
		cout << "Воскресенье" << endl;
	default:
		cout << "Error" << endl;
		break;
	}
}
void case_05() {
	cout << "//case_05" << endl;
	int a;
	int b;
	cout << "Введие число A  ";   // a b любыечисла 
	cin >> a;                     // n дейстивие 
	cout << "Введите число B  ";
	cin >> b;
	int n;
	cout << "Введите действие 1-4  ";
	cin >> n;
	int r;
	switch (n)
	{
	case 1:
		r = a + b;
		break;
	case 2:
		r = a - b;
		break;
	case 3:
		r = a * b;
		break;
	case 4:
		r = a / b;
		break;
	default:
		cout << "Error" << endl;
		break;
	}
	cout << "Результат\t" << r << endl;
}

void case_07() {
	cout << "//case_07" << endl;
	unsigned int kilo = 388;          //kilo вес который дан
	unsigned int weight= kilo;        // weight вес который нужно найти в килограмах
	unsigned int n;                   // n в каких еденицах задан вес 
	cin >> n;
	switch (n)
	{
	case 1:
		break;
	case 2:
		weight = kilo / 1000000;
		break;
	case 3:
		weight = kilo / 1000;
		break;
	case 4:
		weight = kilo * 1000;
		break;
	case 5:
		weight = kilo * 100;
		break;
	default:
		cout << "Error" << endl;
		break;
	}
	cout << weight <<"  Килограм " << endl;
}
void case_09() {
	cout << "//case_09" << endl;
	unsigned int day = 28;
	unsigned month = 2;
	day++;
	switch (month)
	{
	case 1:
		if (day == 32) {
        day = 1;
		month++;
		break;
		}
	case 2:
		if (day == 29) {
			day = 1;
			month++;
			break;
		}
	case 3: 
		if (day == 32) {
			day = 1;
			month++;
			break;
		}
	case 4:
		if (day == 31) {
			day = 1;
			month++;
			break;
		}
	case 5:
		if (day == 32) {
			day = 1;
			month++;
			break;
		}
	case 6: 
		if (day == 31) {
			day = 1;
			month++;
			break;
		}
	case 7:
		if (day == 32) {
			day = 1;
			month++;
			break;
		}
	case 8:
		if (day == 32) {
			day = 1;
			month++;
			break;
		}
	case 9:
		if (day == 31) {
			day = 1;
			month++;
			break;
		}
	case 10:
		if (day == 32) {
			
			day = 1;
			month++;
			break;
		}
	case 11:
		if (day == 31) {
			day = 1;
			month++;
			break;
		}
	case 12:
		if (day == 32) {
			day = 1;
			month++;
			break;
		}
	default:
		break;
	}
	cout << "День  " << day << "Месяц  " << month << endl;
}
void case_10() {
	cout << "//case_10" << endl;
	char s = 'n';      //s начальное положение  north = 'N'; east = 'E' south = 'S'; west = 'W';
	int n;             // n направление робота в начале 
	int k = 1;         // k команда роботу
	switch (s)
	{
	case 'n':
		n = 0;
		break;
	case 'e':
		n = 1;
		break;
	case 's':
		n = 2;
		break;
	case 'w':
		n = 3;
		break;
	default:
		cout << "Error" << endl;
		break;
	}
	int nk = (n-k + 4) % 4;

	switch (nk)
	{
	case 0:
		cout << "Север" << endl;
		break;
	case 1:
		cout << "Восток" << endl;
		break;
	case 2:
		cout << "Юг" << endl;
		break;
	case 3:
		cout << "Запад" << endl;
	default:
		break;
	}
}
int main()
{
	setlocale(LC_CTYPE, "rus");

	if_04();
	if_08();
	if_12();
	if_15();
	if_19();
	case_01();
	case_05();
	case_07();
	case_09();
	case_10();
}

