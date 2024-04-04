#include <iostream> 
#include <cmath> // sin() es egyebmatematikai fuggvenyek
using namespace std;
inline double atvalt(double fok) // inlinefuggvenydefinialasa
{
	return fok * 3.14159 / 180;
}
double terulet(double a, double b, double gamma)
{
	return a * b * sin(atvalt(gamma)) / 2;
}
int main()
{
	double a, b, gamma;
	cout << "\nHaromszog terulete ket oldal es kozbezart szog ismereteben\n\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "gamma = ";
	cin >> gamma;
	cout << "\nterulet= " << terulet(a, b, gamma) << endl << endl;
	system("pause");
}
