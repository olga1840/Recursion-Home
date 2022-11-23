#include<iostream>
using namespace std;


//#define FACTORIAL
#define POW

#ifdef FACTORIAL

int Factorial(int n)
{
	if (n == 0) return 1;
	else return n * Factorial(n - 1);
}

int main()
{	
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите число: "; cin >> n;
	cout << "Факториал числа равен: " << Factorial(n);
	return 0;
}


#endif //FACTORIAL

#ifdef POW

int POWER(int n, int step);

int main()
{
	setlocale(LC_ALL, "");
	int n, step, result;
	cout << "Ведите число основание степени: "; cin >> n;
	cout << "Введите число показатель степени: "; cin >> step;
	result = POWER(n, step);
	cout << n << "^" << step << " = " << result;
	return 0;
}

int POWER(int n, int step)
{
	if (step != 0)
		return (n * POWER(n, step - 1));
  else return 1;
}
 
#endif //POW

