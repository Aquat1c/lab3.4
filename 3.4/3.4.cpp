.Текст програми
//  Lab_03_4.cpp
//  Гудима Михайло
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 5
#include  <iostream> 
#include <math.h>
#define M_PI
using  namespace  std;
int main()
{
	double  x;	//  вхідний  аргумент 
	double  y;	//  вхідний  параметр
	double R;


	cout << "x  =  ";  cin >> x; cout << "y  =  ";  cin >> y; cout << "R  =  ";  cin >> R;

	//  розгалуження  в  повній  формі
	if ((y <= sqrt(2 * R * R) && y >= -R) ||
		(y <= M_PI * R / 2. && y >= R) ||
		(y <= -R && y >= M_PI * R / 2.))
		cout << "yes" << endl;
	else

		cout << "no" << endl;

	cin.get(); return  0;
