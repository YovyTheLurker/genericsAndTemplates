// genericsAndTemplates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Generics: using the same function with different data types. Usint tamplates.

#include <iostream>
using namespace std;

template<typename T>//instead of 'typename' you could use the word 'class' as well.
void Swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}


int main()
{
	int a = 5, b=7;
	cout << a << " - " << b << endl;
	swap<int>(a, b);
	cout << a << " - " << b << endl;

	char c = 'c', d = 'd';
	cout << c << " - " << d << endl;
	swap<char>(c, d);
	cout << c << " - " << d << endl;




	system("pause>0");
}


