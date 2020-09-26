#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//defining variables
	float x, y, Fx = 1, Summ = 0, xi;
	int n, k = 1, fact = 1;
	//asking the user for the input
	cout << "enter x ";
	cin >> x;
	cout << "enter y ";
	cin >> y;
	cout << "enter n ";
	cin >> n;
	//bunch of shit
	for (int i = 1; i <= n; ++i)
	{
		//calculating multiplication term of f(x)
		Fx *= ((i + 1) + x * sin(abs(x)));
		//calculation factorial
		fact *= i;
		//asking user for x[i]
		cout << "enter x[" << i << "] ";
		cin >> xi;
		//adding to the current summ value
		Summ += xi;
	}
	//output
	cout << endl << "x= " << x << endl;
	cout << "f(x)=" << abs(x * cos(x)) + Fx << endl;
	cout << "Multiplication= " << pow((x + y), n) * fact << endl;
	cout << "Summ= " << Summ << endl;
}
